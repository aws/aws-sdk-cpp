/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ResourceStatus.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The current state of an impacted resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ResourceState">AWS
   * API Reference</a></p>
   */
  class ResourceState
  {
  public:
    AWS_IMAGEBUILDER_API ResourceState();
    AWS_IMAGEBUILDER_API ResourceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ResourceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Shows the current lifecycle policy action that was applied to an impacted
     * resource.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Shows the current lifecycle policy action that was applied to an impacted
     * resource.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Shows the current lifecycle policy action that was applied to an impacted
     * resource.</p>
     */
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Shows the current lifecycle policy action that was applied to an impacted
     * resource.</p>
     */
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Shows the current lifecycle policy action that was applied to an impacted
     * resource.</p>
     */
    inline ResourceState& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Shows the current lifecycle policy action that was applied to an impacted
     * resource.</p>
     */
    inline ResourceState& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
