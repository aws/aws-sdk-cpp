/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseError.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a launch template version that could not be deleted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLaunchTemplateVersionsResponseErrorItem">AWS
   * API Reference</a></p>
   */
  class DeleteLaunchTemplateVersionsResponseErrorItem
  {
  public:
    AWS_EC2_API DeleteLaunchTemplateVersionsResponseErrorItem();
    AWS_EC2_API DeleteLaunchTemplateVersionsResponseErrorItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DeleteLaunchTemplateVersionsResponseErrorItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the launch template.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the error.</p>
     */
    inline const ResponseError& GetResponseError() const{ return m_responseError; }
    inline bool ResponseErrorHasBeenSet() const { return m_responseErrorHasBeenSet; }
    inline void SetResponseError(const ResponseError& value) { m_responseErrorHasBeenSet = true; m_responseError = value; }
    inline void SetResponseError(ResponseError&& value) { m_responseErrorHasBeenSet = true; m_responseError = std::move(value); }
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithResponseError(const ResponseError& value) { SetResponseError(value); return *this;}
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithResponseError(ResponseError&& value) { SetResponseError(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    ResponseError m_responseError;
    bool m_responseErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
