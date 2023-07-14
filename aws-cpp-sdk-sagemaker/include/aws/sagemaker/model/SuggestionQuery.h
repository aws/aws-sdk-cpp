﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/PropertyNameQuery.h>
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
   * <p>Specified in the <a>GetSearchSuggestions</a> request. Limits the property
   * names that are included in the response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SuggestionQuery">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SuggestionQuery
  {
  public:
    SuggestionQuery();
    SuggestionQuery(Aws::Utils::Json::JsonView jsonValue);
    SuggestionQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines a property name hint. Only property names that begin with the
     * specified hint are included in the response.</p>
     */
    inline const PropertyNameQuery& GetPropertyNameQuery() const{ return m_propertyNameQuery; }

    /**
     * <p>Defines a property name hint. Only property names that begin with the
     * specified hint are included in the response.</p>
     */
    inline bool PropertyNameQueryHasBeenSet() const { return m_propertyNameQueryHasBeenSet; }

    /**
     * <p>Defines a property name hint. Only property names that begin with the
     * specified hint are included in the response.</p>
     */
    inline void SetPropertyNameQuery(const PropertyNameQuery& value) { m_propertyNameQueryHasBeenSet = true; m_propertyNameQuery = value; }

    /**
     * <p>Defines a property name hint. Only property names that begin with the
     * specified hint are included in the response.</p>
     */
    inline void SetPropertyNameQuery(PropertyNameQuery&& value) { m_propertyNameQueryHasBeenSet = true; m_propertyNameQuery = std::move(value); }

    /**
     * <p>Defines a property name hint. Only property names that begin with the
     * specified hint are included in the response.</p>
     */
    inline SuggestionQuery& WithPropertyNameQuery(const PropertyNameQuery& value) { SetPropertyNameQuery(value); return *this;}

    /**
     * <p>Defines a property name hint. Only property names that begin with the
     * specified hint are included in the response.</p>
     */
    inline SuggestionQuery& WithPropertyNameQuery(PropertyNameQuery&& value) { SetPropertyNameQuery(std::move(value)); return *this;}

  private:

    PropertyNameQuery m_propertyNameQuery;
    bool m_propertyNameQueryHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
