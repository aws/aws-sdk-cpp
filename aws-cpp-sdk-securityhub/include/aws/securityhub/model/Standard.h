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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about a specific standard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Standard">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Standard
  {
  public:
    Standard();
    Standard(Aws::Utils::Json::JsonView jsonValue);
    Standard& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a standard.</p>
     */
    inline const Aws::String& GetStandardsArn() const{ return m_standardsArn; }

    /**
     * <p>The ARN of a standard.</p>
     */
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }

    /**
     * <p>The ARN of a standard.</p>
     */
    inline void SetStandardsArn(const Aws::String& value) { m_standardsArnHasBeenSet = true; m_standardsArn = value; }

    /**
     * <p>The ARN of a standard.</p>
     */
    inline void SetStandardsArn(Aws::String&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::move(value); }

    /**
     * <p>The ARN of a standard.</p>
     */
    inline void SetStandardsArn(const char* value) { m_standardsArnHasBeenSet = true; m_standardsArn.assign(value); }

    /**
     * <p>The ARN of a standard.</p>
     */
    inline Standard& WithStandardsArn(const Aws::String& value) { SetStandardsArn(value); return *this;}

    /**
     * <p>The ARN of a standard.</p>
     */
    inline Standard& WithStandardsArn(Aws::String&& value) { SetStandardsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a standard.</p>
     */
    inline Standard& WithStandardsArn(const char* value) { SetStandardsArn(value); return *this;}


    /**
     * <p>The name of the standard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the standard.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the standard.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the standard.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the standard.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the standard.</p>
     */
    inline Standard& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the standard.</p>
     */
    inline Standard& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the standard.</p>
     */
    inline Standard& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the standard.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the standard.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the standard.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the standard.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the standard.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the standard.</p>
     */
    inline Standard& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the standard.</p>
     */
    inline Standard& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the standard.</p>
     */
    inline Standard& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
