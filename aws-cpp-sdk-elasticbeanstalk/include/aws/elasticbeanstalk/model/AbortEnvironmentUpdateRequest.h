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
   * <p/>
   */
  class AWS_ELASTICBEANSTALK_API AbortEnvironmentUpdateRequest : public ElasticBeanstalkRequest
  {
  public:
    AbortEnvironmentUpdateRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

  private:
    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;
    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
