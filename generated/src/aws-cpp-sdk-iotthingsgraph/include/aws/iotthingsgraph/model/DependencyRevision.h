/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that contains the ID and revision number of a workflow or system
   * that is part of a deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DependencyRevision">AWS
   * API Reference</a></p>
   */
  class DependencyRevision
  {
  public:
    AWS_IOTTHINGSGRAPH_API DependencyRevision() = default;
    AWS_IOTTHINGSGRAPH_API DependencyRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API DependencyRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the workflow or system.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DependencyRevision& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision number of the workflow or system.</p>
     */
    inline long long GetRevisionNumber() const { return m_revisionNumber; }
    inline bool RevisionNumberHasBeenSet() const { return m_revisionNumberHasBeenSet; }
    inline void SetRevisionNumber(long long value) { m_revisionNumberHasBeenSet = true; m_revisionNumber = value; }
    inline DependencyRevision& WithRevisionNumber(long long value) { SetRevisionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_revisionNumber{0};
    bool m_revisionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
