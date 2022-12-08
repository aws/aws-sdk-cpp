/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/Property.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/PropertyFilter">AWS
   * API Reference</a></p>
   */
  class PropertyFilter
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API PropertyFilter();
    AWS_SAGEMAKERGEOSPATIAL_API PropertyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API PropertyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Property& GetProperty() const{ return m_property; }

    /**
     * <p/>
     */
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetProperty(const Property& value) { m_propertyHasBeenSet = true; m_property = value; }

    /**
     * <p/>
     */
    inline void SetProperty(Property&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }

    /**
     * <p/>
     */
    inline PropertyFilter& WithProperty(const Property& value) { SetProperty(value); return *this;}

    /**
     * <p/>
     */
    inline PropertyFilter& WithProperty(Property&& value) { SetProperty(std::move(value)); return *this;}

  private:

    Property m_property;
    bool m_propertyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
