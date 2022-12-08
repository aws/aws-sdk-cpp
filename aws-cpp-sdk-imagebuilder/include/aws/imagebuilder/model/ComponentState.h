/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ComponentStatus.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>A group of fields that describe the current status of components that are no
   * longer active.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ComponentState">AWS
   * API Reference</a></p>
   */
  class ComponentState
  {
  public:
    AWS_IMAGEBUILDER_API ComponentState();
    AWS_IMAGEBUILDER_API ComponentState(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ComponentState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of the component.</p>
     */
    inline const ComponentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the component.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the component.</p>
     */
    inline void SetStatus(const ComponentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the component.</p>
     */
    inline void SetStatus(ComponentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the component.</p>
     */
    inline ComponentState& WithStatus(const ComponentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the component.</p>
     */
    inline ComponentState& WithStatus(ComponentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Describes how or why the component changed state.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Describes how or why the component changed state.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Describes how or why the component changed state.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Describes how or why the component changed state.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Describes how or why the component changed state.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Describes how or why the component changed state.</p>
     */
    inline ComponentState& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Describes how or why the component changed state.</p>
     */
    inline ComponentState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Describes how or why the component changed state.</p>
     */
    inline ComponentState& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    ComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
