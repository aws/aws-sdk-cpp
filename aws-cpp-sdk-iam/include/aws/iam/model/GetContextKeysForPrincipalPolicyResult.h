﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetContextKeysForPrincipalPolicy</a>
   * or <a>GetContextKeysForCustomPolicy</a> request. </p>
   */
  class AWS_IAM_API GetContextKeysForPrincipalPolicyResult
  {
  public:
    GetContextKeysForPrincipalPolicyResult();
    GetContextKeysForPrincipalPolicyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetContextKeysForPrincipalPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The list of context keys that are referenced in the input policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContextKeyNames() const{ return m_contextKeyNames; }

    /**
     * <p>The list of context keys that are referenced in the input policies.</p>
     */
    inline void SetContextKeyNames(const Aws::Vector<Aws::String>& value) { m_contextKeyNames = value; }

    /**
     * <p>The list of context keys that are referenced in the input policies.</p>
     */
    inline void SetContextKeyNames(Aws::Vector<Aws::String>&& value) { m_contextKeyNames = value; }

    /**
     * <p>The list of context keys that are referenced in the input policies.</p>
     */
    inline GetContextKeysForPrincipalPolicyResult& WithContextKeyNames(const Aws::Vector<Aws::String>& value) { SetContextKeyNames(value); return *this;}

    /**
     * <p>The list of context keys that are referenced in the input policies.</p>
     */
    inline GetContextKeysForPrincipalPolicyResult& WithContextKeyNames(Aws::Vector<Aws::String>&& value) { SetContextKeyNames(value); return *this;}

    /**
     * <p>The list of context keys that are referenced in the input policies.</p>
     */
    inline GetContextKeysForPrincipalPolicyResult& AddContextKeyNames(const Aws::String& value) { m_contextKeyNames.push_back(value); return *this; }

    /**
     * <p>The list of context keys that are referenced in the input policies.</p>
     */
    inline GetContextKeysForPrincipalPolicyResult& AddContextKeyNames(Aws::String&& value) { m_contextKeyNames.push_back(value); return *this; }

    /**
     * <p>The list of context keys that are referenced in the input policies.</p>
     */
    inline GetContextKeysForPrincipalPolicyResult& AddContextKeyNames(const char* value) { m_contextKeyNames.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetContextKeysForPrincipalPolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetContextKeysForPrincipalPolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_contextKeyNames;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws