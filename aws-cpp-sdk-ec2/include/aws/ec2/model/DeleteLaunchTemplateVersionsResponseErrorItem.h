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
  class AWS_EC2_API DeleteLaunchTemplateVersionsResponseErrorItem
  {
  public:
    DeleteLaunchTemplateVersionsResponseErrorItem();
    DeleteLaunchTemplateVersionsResponseErrorItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    DeleteLaunchTemplateVersionsResponseErrorItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template.</p>
     */
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template.</p>
     */
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template.</p>
     */
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template.</p>
     */
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template.</p>
     */
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The version number of the launch template.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number of the launch template.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version number of the launch template.</p>
     */
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>Information about the error.</p>
     */
    inline const ResponseError& GetResponseError() const{ return m_responseError; }

    /**
     * <p>Information about the error.</p>
     */
    inline void SetResponseError(const ResponseError& value) { m_responseErrorHasBeenSet = true; m_responseError = value; }

    /**
     * <p>Information about the error.</p>
     */
    inline void SetResponseError(ResponseError&& value) { m_responseErrorHasBeenSet = true; m_responseError = std::move(value); }

    /**
     * <p>Information about the error.</p>
     */
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithResponseError(const ResponseError& value) { SetResponseError(value); return *this;}

    /**
     * <p>Information about the error.</p>
     */
    inline DeleteLaunchTemplateVersionsResponseErrorItem& WithResponseError(ResponseError&& value) { SetResponseError(std::move(value)); return *this;}

  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet;

    ResponseError m_responseError;
    bool m_responseErrorHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
