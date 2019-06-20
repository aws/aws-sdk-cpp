/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>An edge represents a directed connection between two AWS Glue components
   * which are part of the workflow the edge belongs to.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Edge">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Edge
  {
  public:
    Edge();
    Edge(Aws::Utils::Json::JsonView jsonValue);
    Edge& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }

    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }

    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }

    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }

    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }

    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline Edge& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}

    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline Edge& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}

    /**
     * <p>The unique of the node within the workflow where the edge starts.</p>
     */
    inline Edge& WithSourceId(const char* value) { SetSourceId(value); return *this;}


    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }

    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }

    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline void SetDestinationId(const Aws::String& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }

    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline void SetDestinationId(Aws::String&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::move(value); }

    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline void SetDestinationId(const char* value) { m_destinationIdHasBeenSet = true; m_destinationId.assign(value); }

    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline Edge& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline Edge& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}

    /**
     * <p>The unique of the node within the workflow where the edge ends.</p>
     */
    inline Edge& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}

  private:

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet;

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
