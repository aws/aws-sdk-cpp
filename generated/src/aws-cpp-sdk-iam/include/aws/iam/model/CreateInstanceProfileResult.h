﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/InstanceProfile.h>
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
   * <p>Contains the response to a successful <a>CreateInstanceProfile</a> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateInstanceProfileResponse">AWS
   * API Reference</a></p>
   */
  class CreateInstanceProfileResult
  {
  public:
    AWS_IAM_API CreateInstanceProfileResult() = default;
    AWS_IAM_API CreateInstanceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API CreateInstanceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A structure containing details about the new instance profile.</p>
     */
    inline const InstanceProfile& GetInstanceProfile() const { return m_instanceProfile; }
    template<typename InstanceProfileT = InstanceProfile>
    void SetInstanceProfile(InstanceProfileT&& value) { m_instanceProfileHasBeenSet = true; m_instanceProfile = std::forward<InstanceProfileT>(value); }
    template<typename InstanceProfileT = InstanceProfile>
    CreateInstanceProfileResult& WithInstanceProfile(InstanceProfileT&& value) { SetInstanceProfile(std::forward<InstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateInstanceProfileResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    InstanceProfile m_instanceProfile;
    bool m_instanceProfileHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
