/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetContextKeysForPrincipalPolicy.html">GetContextKeysForPrincipalPolicy</a>
   * or <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetContextKeysForCustomPolicy.html">GetContextKeysForCustomPolicy</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetContextKeysForPolicyResponse">AWS
   * API Reference</a></p>
   */
  class GetContextKeysForPrincipalPolicyResult
  {
  public:
    AWS_IAM_API GetContextKeysForPrincipalPolicyResult() = default;
    AWS_IAM_API GetContextKeysForPrincipalPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetContextKeysForPrincipalPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of context keys that are referenced in the input policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContextKeyNames() const { return m_contextKeyNames; }
    template<typename ContextKeyNamesT = Aws::Vector<Aws::String>>
    void SetContextKeyNames(ContextKeyNamesT&& value) { m_contextKeyNamesHasBeenSet = true; m_contextKeyNames = std::forward<ContextKeyNamesT>(value); }
    template<typename ContextKeyNamesT = Aws::Vector<Aws::String>>
    GetContextKeysForPrincipalPolicyResult& WithContextKeyNames(ContextKeyNamesT&& value) { SetContextKeyNames(std::forward<ContextKeyNamesT>(value)); return *this;}
    template<typename ContextKeyNamesT = Aws::String>
    GetContextKeysForPrincipalPolicyResult& AddContextKeyNames(ContextKeyNamesT&& value) { m_contextKeyNamesHasBeenSet = true; m_contextKeyNames.emplace_back(std::forward<ContextKeyNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetContextKeysForPrincipalPolicyResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_contextKeyNames;
    bool m_contextKeyNamesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
