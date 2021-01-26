/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>

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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that can be applied to a field when the connector is being
   * used as a source. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SourceFieldProperties">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API SourceFieldProperties
  {
  public:
    SourceFieldProperties();
    SourceFieldProperties(Aws::Utils::Json::JsonView jsonValue);
    SourceFieldProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether the field can be returned in a search result. </p>
     */
    inline bool GetIsRetrievable() const{ return m_isRetrievable; }

    /**
     * <p> Indicates whether the field can be returned in a search result. </p>
     */
    inline bool IsRetrievableHasBeenSet() const { return m_isRetrievableHasBeenSet; }

    /**
     * <p> Indicates whether the field can be returned in a search result. </p>
     */
    inline void SetIsRetrievable(bool value) { m_isRetrievableHasBeenSet = true; m_isRetrievable = value; }

    /**
     * <p> Indicates whether the field can be returned in a search result. </p>
     */
    inline SourceFieldProperties& WithIsRetrievable(bool value) { SetIsRetrievable(value); return *this;}


    /**
     * <p> Indicates if the field can be queried. </p>
     */
    inline bool GetIsQueryable() const{ return m_isQueryable; }

    /**
     * <p> Indicates if the field can be queried. </p>
     */
    inline bool IsQueryableHasBeenSet() const { return m_isQueryableHasBeenSet; }

    /**
     * <p> Indicates if the field can be queried. </p>
     */
    inline void SetIsQueryable(bool value) { m_isQueryableHasBeenSet = true; m_isQueryable = value; }

    /**
     * <p> Indicates if the field can be queried. </p>
     */
    inline SourceFieldProperties& WithIsQueryable(bool value) { SetIsQueryable(value); return *this;}

  private:

    bool m_isRetrievable;
    bool m_isRetrievableHasBeenSet;

    bool m_isQueryable;
    bool m_isQueryableHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
