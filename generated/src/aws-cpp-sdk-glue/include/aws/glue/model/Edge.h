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
    AWS_GLUE_API Edge() = default;
    AWS_GLUE_API Edge(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Edge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    Edge& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline const Aws::String& GetDestinationId() const { return m_destinationId; }
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }
    template<typename DestinationIdT = Aws::String>
    void SetDestinationId(DestinationIdT&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::forward<DestinationIdT>(value); }
    template<typename DestinationIdT = Aws::String>
    Edge& WithDestinationId(DestinationIdT&& value) { SetDestinationId(std::forward<DestinationIdT>(value)); return *this;}
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
