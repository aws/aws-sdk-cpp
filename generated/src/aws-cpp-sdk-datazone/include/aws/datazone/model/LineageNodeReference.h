/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The reference details for the data lineage node.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LineageNodeReference">AWS
   * API Reference</a></p>
   */
  class LineageNodeReference
  {
  public:
    AWS_DATAZONE_API LineageNodeReference();
    AWS_DATAZONE_API LineageNodeReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageNodeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event timestamp of the data lineage node.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const{ return m_eventTimestamp; }
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
    inline void SetEventTimestamp(const Aws::Utils::DateTime& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }
    inline void SetEventTimestamp(Aws::Utils::DateTime&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::move(value); }
    inline LineageNodeReference& WithEventTimestamp(const Aws::Utils::DateTime& value) { SetEventTimestamp(value); return *this;}
    inline LineageNodeReference& WithEventTimestamp(Aws::Utils::DateTime&& value) { SetEventTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data lineage node.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline LineageNodeReference& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline LineageNodeReference& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline LineageNodeReference& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_eventTimestamp;
    bool m_eventTimestampHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
