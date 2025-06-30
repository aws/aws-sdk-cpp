/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/AccessKeyLastUsed.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <utility>

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
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetAccessKeyLastUsed.html">GetAccessKeyLastUsed</a>
   * request. It is also returned as a member of the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_AccessKeyMetaData.html">AccessKeyMetaData</a>
   * structure returned by the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListAccessKeys.html">ListAccessKeys</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccessKeyLastUsedResponse">AWS
   * API Reference</a></p>
   */
  class GetAccessKeyLastUsedResult
  {
  public:
    AWS_IAM_API GetAccessKeyLastUsedResult() = default;
    AWS_IAM_API GetAccessKeyLastUsedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetAccessKeyLastUsedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the IAM user that owns this access key.</p> <p/>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    GetAccessKeyLastUsedResult& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the last time the access key was used.</p>
     */
    inline const AccessKeyLastUsed& GetAccessKeyLastUsed() const { return m_accessKeyLastUsed; }
    template<typename AccessKeyLastUsedT = AccessKeyLastUsed>
    void SetAccessKeyLastUsed(AccessKeyLastUsedT&& value) { m_accessKeyLastUsedHasBeenSet = true; m_accessKeyLastUsed = std::forward<AccessKeyLastUsedT>(value); }
    template<typename AccessKeyLastUsedT = AccessKeyLastUsed>
    GetAccessKeyLastUsedResult& WithAccessKeyLastUsed(AccessKeyLastUsedT&& value) { SetAccessKeyLastUsed(std::forward<AccessKeyLastUsedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetAccessKeyLastUsedResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    AccessKeyLastUsed m_accessKeyLastUsed;
    bool m_accessKeyLastUsedHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
