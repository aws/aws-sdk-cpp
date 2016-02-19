/*
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
#include <aws/iam/model/ContextEntryResult.h>

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
  class AWS_IAM_API GetContextKeysForPolicyResult
  {
  public:
    GetContextKeysForPolicyResult();
    GetContextKeysForPolicyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetContextKeysForPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Aws::Vector<ContextEntryResult>& GetContextEntries() const{ return m_contextEntries; }

    
    inline void SetContextEntries(const Aws::Vector<ContextEntryResult>& value) { m_contextEntries = value; }

    
    inline void SetContextEntries(Aws::Vector<ContextEntryResult>&& value) { m_contextEntries = value; }

    
    inline GetContextKeysForPolicyResult& WithContextEntries(const Aws::Vector<ContextEntryResult>& value) { SetContextEntries(value); return *this;}

    
    inline GetContextKeysForPolicyResult& WithContextEntries(Aws::Vector<ContextEntryResult>&& value) { SetContextEntries(value); return *this;}

    
    inline GetContextKeysForPolicyResult& AddContextEntries(const ContextEntryResult& value) { m_contextEntries.push_back(value); return *this; }

    
    inline GetContextKeysForPolicyResult& AddContextEntries(ContextEntryResult&& value) { m_contextEntries.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetContextKeysForPolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetContextKeysForPolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ContextEntryResult> m_contextEntries;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws