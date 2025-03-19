/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure containing the Lake Formation audit context.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AuditContext">AWS
   * API Reference</a></p>
   */
  class AuditContext
  {
  public:
    AWS_GLUE_API AuditContext() = default;
    AWS_GLUE_API AuditContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AuditContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string containing the additional audit context information.</p>
     */
    inline const Aws::String& GetAdditionalAuditContext() const { return m_additionalAuditContext; }
    inline bool AdditionalAuditContextHasBeenSet() const { return m_additionalAuditContextHasBeenSet; }
    template<typename AdditionalAuditContextT = Aws::String>
    void SetAdditionalAuditContext(AdditionalAuditContextT&& value) { m_additionalAuditContextHasBeenSet = true; m_additionalAuditContext = std::forward<AdditionalAuditContextT>(value); }
    template<typename AdditionalAuditContextT = Aws::String>
    AuditContext& WithAdditionalAuditContext(AdditionalAuditContextT&& value) { SetAdditionalAuditContext(std::forward<AdditionalAuditContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested columns for audit.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedColumns() const { return m_requestedColumns; }
    inline bool RequestedColumnsHasBeenSet() const { return m_requestedColumnsHasBeenSet; }
    template<typename RequestedColumnsT = Aws::Vector<Aws::String>>
    void SetRequestedColumns(RequestedColumnsT&& value) { m_requestedColumnsHasBeenSet = true; m_requestedColumns = std::forward<RequestedColumnsT>(value); }
    template<typename RequestedColumnsT = Aws::Vector<Aws::String>>
    AuditContext& WithRequestedColumns(RequestedColumnsT&& value) { SetRequestedColumns(std::forward<RequestedColumnsT>(value)); return *this;}
    template<typename RequestedColumnsT = Aws::String>
    AuditContext& AddRequestedColumns(RequestedColumnsT&& value) { m_requestedColumnsHasBeenSet = true; m_requestedColumns.emplace_back(std::forward<RequestedColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>All columns request for audit.</p>
     */
    inline bool GetAllColumnsRequested() const { return m_allColumnsRequested; }
    inline bool AllColumnsRequestedHasBeenSet() const { return m_allColumnsRequestedHasBeenSet; }
    inline void SetAllColumnsRequested(bool value) { m_allColumnsRequestedHasBeenSet = true; m_allColumnsRequested = value; }
    inline AuditContext& WithAllColumnsRequested(bool value) { SetAllColumnsRequested(value); return *this;}
    ///@}
  private:

    Aws::String m_additionalAuditContext;
    bool m_additionalAuditContextHasBeenSet = false;

    Aws::Vector<Aws::String> m_requestedColumns;
    bool m_requestedColumnsHasBeenSet = false;

    bool m_allColumnsRequested{false};
    bool m_allColumnsRequestedHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
