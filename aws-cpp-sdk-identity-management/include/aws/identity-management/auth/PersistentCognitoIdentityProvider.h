/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/identity-management/IdentityManagment_EXPORTS.h>
#include <mutex>

namespace Aws
{
    namespace Utils
    {
        namespace Json
        {
            class JsonValue;
        }
    }
    namespace Auth
    {
        class AWS_IDENTITY_MANAGEMENT_API PersistentCognitoIdentityProvider
        {
        public:
            virtual bool HasIdentityId() const = 0;
            virtual bool HasLogins() const = 0;
            virtual Aws::String GetIdentityId() const = 0;
            virtual Aws::Map<Aws::String, Aws::String> GetLogins() const = 0;
            virtual Aws::String GetAccountId() const = 0;
            virtual Aws::String GetIdentityPoolId() const = 0;
            virtual void PersistIdentityId(const Aws::String&) = 0;
            virtual void PersistLogins(const Aws::Map<Aws::String, Aws::String>&) = 0;
            inline void ClearLogins() { PersistLogins(Aws::Map<Aws::String, Aws::String>()); }
            inline void ClearIdentity() { PersistIdentityId(""); }
            inline void Logout() { ClearIdentity(); ClearLogins(); }
        };

        class AWS_IDENTITY_MANAGEMENT_API PersistentCognitoIdentityProvider_JsonFileImpl : public PersistentCognitoIdentityProvider
        {
        public:
            PersistentCognitoIdentityProvider_JsonFileImpl(const Aws::String& identityPoolId, const Aws::String& accountId);

            bool HasIdentityId() const override { return !m_identityId.empty(); }
            bool HasLogins() const override { return !m_logins.empty(); }
            Aws::String GetIdentityId() const override { return m_identityId; }
            Aws::Map<Aws::String, Aws::String> GetLogins() const override { return m_logins; }
            inline Aws::String GetAccountId() const override { return m_accountId; }
            inline Aws::String GetIdentityPoolId() const override { return m_identityPoolId; }
            void PersistIdentityId(const Aws::String&) override;
            void PersistLogins(const Aws::Map<Aws::String, Aws::String>&) override;

        private:
            Utils::Json::JsonValue LoadJsonDocFromFile() const;
            void PersistChangesToFile(const Utils::Json::JsonValue&) const;

            std::mutex m_docMutex;
            Aws::String m_identityPoolId;
            Aws::String m_accountId;
            Aws::String m_identityId;
            Aws::Map<Aws::String, Aws::String> m_logins;

        };

        typedef PersistentCognitoIdentityProvider_JsonFileImpl DefaultPersistentCognitoIdentityProvider;
    }
}