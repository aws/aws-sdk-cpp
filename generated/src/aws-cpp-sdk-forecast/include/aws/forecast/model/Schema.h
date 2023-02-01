/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/SchemaAttribute.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Defines the fields of a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Schema">AWS API
   * Reference</a></p>
   */
  class Schema
  {
  public:
    AWS_FORECASTSERVICE_API Schema();
    AWS_FORECASTSERVICE_API Schema(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Schema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of attributes specifying the name and type of each field in a
     * dataset.</p>
     */
    inline const Aws::Vector<SchemaAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>An array of attributes specifying the name and type of each field in a
     * dataset.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>An array of attributes specifying the name and type of each field in a
     * dataset.</p>
     */
    inline void SetAttributes(const Aws::Vector<SchemaAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>An array of attributes specifying the name and type of each field in a
     * dataset.</p>
     */
    inline void SetAttributes(Aws::Vector<SchemaAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>An array of attributes specifying the name and type of each field in a
     * dataset.</p>
     */
    inline Schema& WithAttributes(const Aws::Vector<SchemaAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>An array of attributes specifying the name and type of each field in a
     * dataset.</p>
     */
    inline Schema& WithAttributes(Aws::Vector<SchemaAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of attributes specifying the name and type of each field in a
     * dataset.</p>
     */
    inline Schema& AddAttributes(const SchemaAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>An array of attributes specifying the name and type of each field in a
     * dataset.</p>
     */
    inline Schema& AddAttributes(SchemaAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SchemaAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
