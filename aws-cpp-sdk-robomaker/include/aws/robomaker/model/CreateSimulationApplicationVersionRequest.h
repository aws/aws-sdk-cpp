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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API CreateSimulationApplicationVersionRequest : public RoboMakerRequest
  {
  public:
    CreateSimulationApplicationVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSimulationApplicationVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The application information for the simulation application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline const Aws::String& GetCurrentRevisionId() const{ return m_currentRevisionId; }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline bool CurrentRevisionIdHasBeenSet() const { return m_currentRevisionIdHasBeenSet; }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline void SetCurrentRevisionId(const Aws::String& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = value; }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline void SetCurrentRevisionId(Aws::String&& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = std::move(value); }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline void SetCurrentRevisionId(const char* value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId.assign(value); }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithCurrentRevisionId(const Aws::String& value) { SetCurrentRevisionId(value); return *this;}

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithCurrentRevisionId(Aws::String&& value) { SetCurrentRevisionId(std::move(value)); return *this;}

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithCurrentRevisionId(const char* value) { SetCurrentRevisionId(value); return *this;}

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet;

    Aws::String m_currentRevisionId;
    bool m_currentRevisionIdHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
