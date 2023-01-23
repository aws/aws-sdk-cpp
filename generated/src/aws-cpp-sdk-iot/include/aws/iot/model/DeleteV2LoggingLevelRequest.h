/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/LogTargetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class DeleteV2LoggingLevelRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteV2LoggingLevelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteV2LoggingLevel"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The type of resource for which you are configuring logging. Must be
     * <code>THING_Group</code>.</p>
     */
    inline const LogTargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of resource for which you are configuring logging. Must be
     * <code>THING_Group</code>.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of resource for which you are configuring logging. Must be
     * <code>THING_Group</code>.</p>
     */
    inline void SetTargetType(const LogTargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of resource for which you are configuring logging. Must be
     * <code>THING_Group</code>.</p>
     */
    inline void SetTargetType(LogTargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of resource for which you are configuring logging. Must be
     * <code>THING_Group</code>.</p>
     */
    inline DeleteV2LoggingLevelRequest& WithTargetType(const LogTargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of resource for which you are configuring logging. Must be
     * <code>THING_Group</code>.</p>
     */
    inline DeleteV2LoggingLevelRequest& WithTargetType(LogTargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>The name of the resource for which you are configuring logging.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }

    /**
     * <p>The name of the resource for which you are configuring logging.</p>
     */
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }

    /**
     * <p>The name of the resource for which you are configuring logging.</p>
     */
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    /**
     * <p>The name of the resource for which you are configuring logging.</p>
     */
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }

    /**
     * <p>The name of the resource for which you are configuring logging.</p>
     */
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }

    /**
     * <p>The name of the resource for which you are configuring logging.</p>
     */
    inline DeleteV2LoggingLevelRequest& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}

    /**
     * <p>The name of the resource for which you are configuring logging.</p>
     */
    inline DeleteV2LoggingLevelRequest& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource for which you are configuring logging.</p>
     */
    inline DeleteV2LoggingLevelRequest& WithTargetName(const char* value) { SetTargetName(value); return *this;}

  private:

    LogTargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
