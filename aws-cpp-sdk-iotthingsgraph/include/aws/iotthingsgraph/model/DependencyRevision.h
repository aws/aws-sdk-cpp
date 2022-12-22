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
    AWS_IOTTHINGSGRAPH_API DependencyRevision();
    AWS_IOTTHINGSGRAPH_API DependencyRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API DependencyRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the workflow or system.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the workflow or system.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the workflow or system.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the workflow or system.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the workflow or system.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the workflow or system.</p>
     */
    inline DependencyRevision& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the workflow or system.</p>
     */
    inline DependencyRevision& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workflow or system.</p>
     */
    inline DependencyRevision& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The revision number of the workflow or system.</p>
     */
    inline long long GetRevisionNumber() const{ return m_revisionNumber; }

    /**
     * <p>The revision number of the workflow or system.</p>
     */
    inline bool RevisionNumberHasBeenSet() const { return m_revisionNumberHasBeenSet; }

    /**
     * <p>The revision number of the workflow or system.</p>
     */
    inline void SetRevisionNumber(long long value) { m_revisionNumberHasBeenSet = true; m_revisionNumber = value; }

    /**
     * <p>The revision number of the workflow or system.</p>
     */
    inline DependencyRevision& WithRevisionNumber(long long value) { SetRevisionNumber(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_revisionNumber;
    bool m_revisionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
