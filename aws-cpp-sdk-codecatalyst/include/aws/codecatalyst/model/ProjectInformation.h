/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a project in a space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ProjectInformation">AWS
   * API Reference</a></p>
   */
  class ProjectInformation
  {
  public:
    AWS_CODECATALYST_API ProjectInformation();
    AWS_CODECATALYST_API ProjectInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API ProjectInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline ProjectInformation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline ProjectInformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline ProjectInformation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The system-generated unique ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The system-generated unique ID of the project.</p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p>The system-generated unique ID of the project.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p>The system-generated unique ID of the project.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p>The system-generated unique ID of the project.</p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p>The system-generated unique ID of the project.</p>
     */
    inline ProjectInformation& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the project.</p>
     */
    inline ProjectInformation& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the project.</p>
     */
    inline ProjectInformation& WithProjectId(const char* value) { SetProjectId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
