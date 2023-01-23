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
   * <p>A structure containing information for audit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AuditContext">AWS
   * API Reference</a></p>
   */
  class AuditContext
  {
  public:
    AWS_GLUE_API AuditContext();
    AWS_GLUE_API AuditContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AuditContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The context for the audit..</p>
     */
    inline const Aws::String& GetAdditionalAuditContext() const{ return m_additionalAuditContext; }

    /**
     * <p>The context for the audit..</p>
     */
    inline bool AdditionalAuditContextHasBeenSet() const { return m_additionalAuditContextHasBeenSet; }

    /**
     * <p>The context for the audit..</p>
     */
    inline void SetAdditionalAuditContext(const Aws::String& value) { m_additionalAuditContextHasBeenSet = true; m_additionalAuditContext = value; }

    /**
     * <p>The context for the audit..</p>
     */
    inline void SetAdditionalAuditContext(Aws::String&& value) { m_additionalAuditContextHasBeenSet = true; m_additionalAuditContext = std::move(value); }

    /**
     * <p>The context for the audit..</p>
     */
    inline void SetAdditionalAuditContext(const char* value) { m_additionalAuditContextHasBeenSet = true; m_additionalAuditContext.assign(value); }

    /**
     * <p>The context for the audit..</p>
     */
    inline AuditContext& WithAdditionalAuditContext(const Aws::String& value) { SetAdditionalAuditContext(value); return *this;}

    /**
     * <p>The context for the audit..</p>
     */
    inline AuditContext& WithAdditionalAuditContext(Aws::String&& value) { SetAdditionalAuditContext(std::move(value)); return *this;}

    /**
     * <p>The context for the audit..</p>
     */
    inline AuditContext& WithAdditionalAuditContext(const char* value) { SetAdditionalAuditContext(value); return *this;}


    /**
     * <p>The requested columns for audit.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedColumns() const{ return m_requestedColumns; }

    /**
     * <p>The requested columns for audit.</p>
     */
    inline bool RequestedColumnsHasBeenSet() const { return m_requestedColumnsHasBeenSet; }

    /**
     * <p>The requested columns for audit.</p>
     */
    inline void SetRequestedColumns(const Aws::Vector<Aws::String>& value) { m_requestedColumnsHasBeenSet = true; m_requestedColumns = value; }

    /**
     * <p>The requested columns for audit.</p>
     */
    inline void SetRequestedColumns(Aws::Vector<Aws::String>&& value) { m_requestedColumnsHasBeenSet = true; m_requestedColumns = std::move(value); }

    /**
     * <p>The requested columns for audit.</p>
     */
    inline AuditContext& WithRequestedColumns(const Aws::Vector<Aws::String>& value) { SetRequestedColumns(value); return *this;}

    /**
     * <p>The requested columns for audit.</p>
     */
    inline AuditContext& WithRequestedColumns(Aws::Vector<Aws::String>&& value) { SetRequestedColumns(std::move(value)); return *this;}

    /**
     * <p>The requested columns for audit.</p>
     */
    inline AuditContext& AddRequestedColumns(const Aws::String& value) { m_requestedColumnsHasBeenSet = true; m_requestedColumns.push_back(value); return *this; }

    /**
     * <p>The requested columns for audit.</p>
     */
    inline AuditContext& AddRequestedColumns(Aws::String&& value) { m_requestedColumnsHasBeenSet = true; m_requestedColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>The requested columns for audit.</p>
     */
    inline AuditContext& AddRequestedColumns(const char* value) { m_requestedColumnsHasBeenSet = true; m_requestedColumns.push_back(value); return *this; }


    /**
     * <p>All columns request for audit.</p>
     */
    inline bool GetAllColumnsRequested() const{ return m_allColumnsRequested; }

    /**
     * <p>All columns request for audit.</p>
     */
    inline bool AllColumnsRequestedHasBeenSet() const { return m_allColumnsRequestedHasBeenSet; }

    /**
     * <p>All columns request for audit.</p>
     */
    inline void SetAllColumnsRequested(bool value) { m_allColumnsRequestedHasBeenSet = true; m_allColumnsRequested = value; }

    /**
     * <p>All columns request for audit.</p>
     */
    inline AuditContext& WithAllColumnsRequested(bool value) { SetAllColumnsRequested(value); return *this;}

  private:

    Aws::String m_additionalAuditContext;
    bool m_additionalAuditContextHasBeenSet = false;

    Aws::Vector<Aws::String> m_requestedColumns;
    bool m_requestedColumnsHasBeenSet = false;

    bool m_allColumnsRequested;
    bool m_allColumnsRequestedHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
