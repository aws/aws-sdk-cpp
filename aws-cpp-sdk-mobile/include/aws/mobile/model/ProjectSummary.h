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
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Mobile
{
namespace Model
{

  /**
   * <p> Summary information about an AWS Mobile Hub project. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ProjectSummary">AWS
   * API Reference</a></p>
   */
  class AWS_MOBILE_API ProjectSummary
  {
  public:
    ProjectSummary();
    ProjectSummary(Aws::Utils::Json::JsonView jsonValue);
    ProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Name of the project. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name of the project. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name of the project. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name of the project. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name of the project. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name of the project. </p>
     */
    inline ProjectSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name of the project. </p>
     */
    inline ProjectSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name of the project. </p>
     */
    inline ProjectSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Unique project identifier. </p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p> Unique project identifier. </p>
     */
    inline ProjectSummary& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p> Unique project identifier. </p>
     */
    inline ProjectSummary& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p> Unique project identifier. </p>
     */
    inline ProjectSummary& WithProjectId(const char* value) { SetProjectId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
