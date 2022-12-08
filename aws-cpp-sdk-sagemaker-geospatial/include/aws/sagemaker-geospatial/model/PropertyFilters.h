/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/LogicalOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/PropertyFilter.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/PropertyFilters">AWS
   * API Reference</a></p>
   */
  class PropertyFilters
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API PropertyFilters();
    AWS_SAGEMAKERGEOSPATIAL_API PropertyFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API PropertyFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const LogicalOperator& GetLogicalOperator() const{ return m_logicalOperator; }

    /**
     * <p/>
     */
    inline bool LogicalOperatorHasBeenSet() const { return m_logicalOperatorHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetLogicalOperator(const LogicalOperator& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }

    /**
     * <p/>
     */
    inline void SetLogicalOperator(LogicalOperator&& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = std::move(value); }

    /**
     * <p/>
     */
    inline PropertyFilters& WithLogicalOperator(const LogicalOperator& value) { SetLogicalOperator(value); return *this;}

    /**
     * <p/>
     */
    inline PropertyFilters& WithLogicalOperator(LogicalOperator&& value) { SetLogicalOperator(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<PropertyFilter>& GetProperties() const{ return m_properties; }

    /**
     * <p/>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetProperties(const Aws::Vector<PropertyFilter>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p/>
     */
    inline void SetProperties(Aws::Vector<PropertyFilter>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p/>
     */
    inline PropertyFilters& WithProperties(const Aws::Vector<PropertyFilter>& value) { SetProperties(value); return *this;}

    /**
     * <p/>
     */
    inline PropertyFilters& WithProperties(Aws::Vector<PropertyFilter>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline PropertyFilters& AddProperties(const PropertyFilter& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline PropertyFilters& AddProperties(PropertyFilter&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }

  private:

    LogicalOperator m_logicalOperator;
    bool m_logicalOperatorHasBeenSet = false;

    Aws::Vector<PropertyFilter> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
