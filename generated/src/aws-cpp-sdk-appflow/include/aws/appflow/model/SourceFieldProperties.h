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
  class SourceFieldProperties
  {
  public:
    AWS_APPFLOW_API SourceFieldProperties() = default;
    AWS_APPFLOW_API SourceFieldProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SourceFieldProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether the field can be returned in a search result. </p>
     */
    inline bool GetIsRetrievable() const { return m_isRetrievable; }
    inline bool IsRetrievableHasBeenSet() const { return m_isRetrievableHasBeenSet; }
    inline void SetIsRetrievable(bool value) { m_isRetrievableHasBeenSet = true; m_isRetrievable = value; }
    inline SourceFieldProperties& WithIsRetrievable(bool value) { SetIsRetrievable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates if the field can be queried. </p>
     */
    inline bool GetIsQueryable() const { return m_isQueryable; }
    inline bool IsQueryableHasBeenSet() const { return m_isQueryableHasBeenSet; }
    inline void SetIsQueryable(bool value) { m_isQueryableHasBeenSet = true; m_isQueryable = value; }
    inline SourceFieldProperties& WithIsQueryable(bool value) { SetIsQueryable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if this timestamp field can be used for incremental queries.</p>
     */
    inline bool GetIsTimestampFieldForIncrementalQueries() const { return m_isTimestampFieldForIncrementalQueries; }
    inline bool IsTimestampFieldForIncrementalQueriesHasBeenSet() const { return m_isTimestampFieldForIncrementalQueriesHasBeenSet; }
    inline void SetIsTimestampFieldForIncrementalQueries(bool value) { m_isTimestampFieldForIncrementalQueriesHasBeenSet = true; m_isTimestampFieldForIncrementalQueries = value; }
    inline SourceFieldProperties& WithIsTimestampFieldForIncrementalQueries(bool value) { SetIsTimestampFieldForIncrementalQueries(value); return *this;}
    ///@}
  private:

    bool m_isRetrievable{false};
    bool m_isRetrievableHasBeenSet = false;

    bool m_isQueryable{false};
    bool m_isQueryableHasBeenSet = false;

    bool m_isTimestampFieldForIncrementalQueries{false};
    bool m_isTimestampFieldForIncrementalQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
