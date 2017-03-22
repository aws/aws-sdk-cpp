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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to delete an application version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteApplicationVersionMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DeleteApplicationVersionRequest : public ElasticBeanstalkRequest
  {
  public:
    DeleteApplicationVersionRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The name of the application to which the version belongs.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application to which the version belongs.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application to which the version belongs.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application to which the version belongs.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application to which the version belongs.</p>
     */
    inline DeleteApplicationVersionRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application to which the version belongs.</p>
     */
    inline DeleteApplicationVersionRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application to which the version belongs.</p>
     */
    inline DeleteApplicationVersionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The label of the version to delete.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>The label of the version to delete.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>The label of the version to delete.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>The label of the version to delete.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>The label of the version to delete.</p>
     */
    inline DeleteApplicationVersionRequest& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The label of the version to delete.</p>
     */
    inline DeleteApplicationVersionRequest& WithVersionLabel(Aws::String&& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The label of the version to delete.</p>
     */
    inline DeleteApplicationVersionRequest& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}

    /**
     * <p>Set to <code>true</code> to delete the source bundle from your storage
     * bucket. Otherwise, the application version is deleted only from Elastic
     * Beanstalk and the source bundle remains in Amazon S3.</p>
     */
    inline bool GetDeleteSourceBundle() const{ return m_deleteSourceBundle; }

    /**
     * <p>Set to <code>true</code> to delete the source bundle from your storage
     * bucket. Otherwise, the application version is deleted only from Elastic
     * Beanstalk and the source bundle remains in Amazon S3.</p>
     */
    inline void SetDeleteSourceBundle(bool value) { m_deleteSourceBundleHasBeenSet = true; m_deleteSourceBundle = value; }

    /**
     * <p>Set to <code>true</code> to delete the source bundle from your storage
     * bucket. Otherwise, the application version is deleted only from Elastic
     * Beanstalk and the source bundle remains in Amazon S3.</p>
     */
    inline DeleteApplicationVersionRequest& WithDeleteSourceBundle(bool value) { SetDeleteSourceBundle(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;
    bool m_deleteSourceBundle;
    bool m_deleteSourceBundleHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
