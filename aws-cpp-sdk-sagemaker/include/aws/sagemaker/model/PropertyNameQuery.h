/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Part of the <code>SuggestionQuery</code> type. Specifies a hint for
   * retrieving property names that begin with the specified text.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PropertyNameQuery">AWS
   * API Reference</a></p>
   */
  class PropertyNameQuery
  {
  public:
    AWS_SAGEMAKER_API PropertyNameQuery();
    AWS_SAGEMAKER_API PropertyNameQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PropertyNameQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Text that begins a property's name.</p>
     */
    inline const Aws::String& GetPropertyNameHint() const{ return m_propertyNameHint; }

    /**
     * <p>Text that begins a property's name.</p>
     */
    inline bool PropertyNameHintHasBeenSet() const { return m_propertyNameHintHasBeenSet; }

    /**
     * <p>Text that begins a property's name.</p>
     */
    inline void SetPropertyNameHint(const Aws::String& value) { m_propertyNameHintHasBeenSet = true; m_propertyNameHint = value; }

    /**
     * <p>Text that begins a property's name.</p>
     */
    inline void SetPropertyNameHint(Aws::String&& value) { m_propertyNameHintHasBeenSet = true; m_propertyNameHint = std::move(value); }

    /**
     * <p>Text that begins a property's name.</p>
     */
    inline void SetPropertyNameHint(const char* value) { m_propertyNameHintHasBeenSet = true; m_propertyNameHint.assign(value); }

    /**
     * <p>Text that begins a property's name.</p>
     */
    inline PropertyNameQuery& WithPropertyNameHint(const Aws::String& value) { SetPropertyNameHint(value); return *this;}

    /**
     * <p>Text that begins a property's name.</p>
     */
    inline PropertyNameQuery& WithPropertyNameHint(Aws::String&& value) { SetPropertyNameHint(std::move(value)); return *this;}

    /**
     * <p>Text that begins a property's name.</p>
     */
    inline PropertyNameQuery& WithPropertyNameHint(const char* value) { SetPropertyNameHint(value); return *this;}

  private:

    Aws::String m_propertyNameHint;
    bool m_propertyNameHintHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
