/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details multiple activities as they related to a potential security event.
   * Detective uses graph analysis technique that infers relationships between
   * findings and entities, and groups them together as a finding
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/RelatedFindingGroupDetail">AWS
   * API Reference</a></p>
   */
  class RelatedFindingGroupDetail
  {
  public:
    AWS_DETECTIVE_API RelatedFindingGroupDetail();
    AWS_DETECTIVE_API RelatedFindingGroupDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API RelatedFindingGroupDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the finding group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the finding group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the finding group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the finding group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the finding group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the finding group.</p>
     */
    inline RelatedFindingGroupDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the finding group.</p>
     */
    inline RelatedFindingGroupDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the finding group.</p>
     */
    inline RelatedFindingGroupDetail& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
