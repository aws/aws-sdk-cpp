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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberFrameworkConfiguration.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Configuration properties of the member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API MemberConfiguration
  {
  public:
    MemberConfiguration();
    MemberConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MemberConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the member.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the member.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline MemberConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline MemberConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline MemberConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description of the member.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the member.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the member.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the member.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the member.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the member.</p>
     */
    inline MemberConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the member.</p>
     */
    inline MemberConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the member.</p>
     */
    inline MemberConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline const MemberFrameworkConfiguration& GetFrameworkConfiguration() const{ return m_frameworkConfiguration; }

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline bool FrameworkConfigurationHasBeenSet() const { return m_frameworkConfigurationHasBeenSet; }

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline void SetFrameworkConfiguration(const MemberFrameworkConfiguration& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = value; }

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline void SetFrameworkConfiguration(MemberFrameworkConfiguration&& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = std::move(value); }

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline MemberConfiguration& WithFrameworkConfiguration(const MemberFrameworkConfiguration& value) { SetFrameworkConfiguration(value); return *this;}

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline MemberConfiguration& WithFrameworkConfiguration(MemberFrameworkConfiguration&& value) { SetFrameworkConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    MemberFrameworkConfiguration m_frameworkConfiguration;
    bool m_frameworkConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
