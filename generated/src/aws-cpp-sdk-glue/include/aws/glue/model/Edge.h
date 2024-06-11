/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>An edge represents a directed connection between two Glue components that are
   * part of the workflow the edge belongs to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Edge">AWS API
   * Reference</a></p>
   */
  class Edge
  {
  public:
    AWS_GLUE_API Edge();
    AWS_GLUE_API Edge(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Edge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }
    inline Edge& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline Edge& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline Edge& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }
    inline void SetDestinationId(const Aws::String& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }
    inline void SetDestinationId(Aws::String&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::move(value); }
    inline void SetDestinationId(const char* value) { m_destinationIdHasBeenSet = true; m_destinationId.assign(value); }
    inline Edge& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}
    inline Edge& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}
    inline Edge& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
