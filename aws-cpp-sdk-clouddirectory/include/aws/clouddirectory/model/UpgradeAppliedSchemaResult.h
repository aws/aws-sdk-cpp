/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API UpgradeAppliedSchemaResult
  {
  public:
    UpgradeAppliedSchemaResult();
    UpgradeAppliedSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpgradeAppliedSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline const Aws::String& GetUpgradedSchemaArn() const{ return m_upgradedSchemaArn; }

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline void SetUpgradedSchemaArn(const Aws::String& value) { m_upgradedSchemaArn = value; }

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline void SetUpgradedSchemaArn(Aws::String&& value) { m_upgradedSchemaArn = std::move(value); }

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline void SetUpgradedSchemaArn(const char* value) { m_upgradedSchemaArn.assign(value); }

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline UpgradeAppliedSchemaResult& WithUpgradedSchemaArn(const Aws::String& value) { SetUpgradedSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline UpgradeAppliedSchemaResult& WithUpgradedSchemaArn(Aws::String&& value) { SetUpgradedSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline UpgradeAppliedSchemaResult& WithUpgradedSchemaArn(const char* value) { SetUpgradedSchemaArn(value); return *this;}


    /**
     * <p>The ARN of the directory that is returned as part of the response.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN of the directory that is returned as part of the response.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArn = value; }

    /**
     * <p>The ARN of the directory that is returned as part of the response.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArn = std::move(value); }

    /**
     * <p>The ARN of the directory that is returned as part of the response.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArn.assign(value); }

    /**
     * <p>The ARN of the directory that is returned as part of the response.</p>
     */
    inline UpgradeAppliedSchemaResult& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory that is returned as part of the response.</p>
     */
    inline UpgradeAppliedSchemaResult& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the directory that is returned as part of the response.</p>
     */
    inline UpgradeAppliedSchemaResult& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

  private:

    Aws::String m_upgradedSchemaArn;

    Aws::String m_directoryArn;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
