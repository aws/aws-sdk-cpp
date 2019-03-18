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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes the Chef configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ChefConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API ChefConfiguration
  {
  public:
    ChefConfiguration();
    ChefConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ChefConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to enable Berkshelf.</p>
     */
    inline bool GetManageBerkshelf() const{ return m_manageBerkshelf; }

    /**
     * <p>Whether to enable Berkshelf.</p>
     */
    inline bool ManageBerkshelfHasBeenSet() const { return m_manageBerkshelfHasBeenSet; }

    /**
     * <p>Whether to enable Berkshelf.</p>
     */
    inline void SetManageBerkshelf(bool value) { m_manageBerkshelfHasBeenSet = true; m_manageBerkshelf = value; }

    /**
     * <p>Whether to enable Berkshelf.</p>
     */
    inline ChefConfiguration& WithManageBerkshelf(bool value) { SetManageBerkshelf(value); return *this;}


    /**
     * <p>The Berkshelf version.</p>
     */
    inline const Aws::String& GetBerkshelfVersion() const{ return m_berkshelfVersion; }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline bool BerkshelfVersionHasBeenSet() const { return m_berkshelfVersionHasBeenSet; }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline void SetBerkshelfVersion(const Aws::String& value) { m_berkshelfVersionHasBeenSet = true; m_berkshelfVersion = value; }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline void SetBerkshelfVersion(Aws::String&& value) { m_berkshelfVersionHasBeenSet = true; m_berkshelfVersion = std::move(value); }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline void SetBerkshelfVersion(const char* value) { m_berkshelfVersionHasBeenSet = true; m_berkshelfVersion.assign(value); }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline ChefConfiguration& WithBerkshelfVersion(const Aws::String& value) { SetBerkshelfVersion(value); return *this;}

    /**
     * <p>The Berkshelf version.</p>
     */
    inline ChefConfiguration& WithBerkshelfVersion(Aws::String&& value) { SetBerkshelfVersion(std::move(value)); return *this;}

    /**
     * <p>The Berkshelf version.</p>
     */
    inline ChefConfiguration& WithBerkshelfVersion(const char* value) { SetBerkshelfVersion(value); return *this;}

  private:

    bool m_manageBerkshelf;
    bool m_manageBerkshelfHasBeenSet;

    Aws::String m_berkshelfVersion;
    bool m_berkshelfVersionHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
