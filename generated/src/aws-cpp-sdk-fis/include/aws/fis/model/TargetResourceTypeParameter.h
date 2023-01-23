/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the parameters for a resource type. Use parameters to determine
   * which tasks are identified during target resolution.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/TargetResourceTypeParameter">AWS
   * API Reference</a></p>
   */
  class TargetResourceTypeParameter
  {
  public:
    AWS_FIS_API TargetResourceTypeParameter();
    AWS_FIS_API TargetResourceTypeParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API TargetResourceTypeParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the parameter.</p>
     */
    inline TargetResourceTypeParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameter.</p>
     */
    inline TargetResourceTypeParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the parameter.</p>
     */
    inline TargetResourceTypeParameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the parameter is required.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>Indicates whether the parameter is required.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>Indicates whether the parameter is required.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>Indicates whether the parameter is required.</p>
     */
    inline TargetResourceTypeParameter& WithRequired(bool value) { SetRequired(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
