/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/AppInstanceDataType.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The streaming configuration of an app instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AppInstanceStreamingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API AppInstanceStreamingConfiguration
  {
  public:
    AppInstanceStreamingConfiguration();
    AppInstanceStreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AppInstanceStreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data type of the app instance.</p>
     */
    inline const AppInstanceDataType& GetAppInstanceDataType() const{ return m_appInstanceDataType; }

    /**
     * <p>The data type of the app instance.</p>
     */
    inline bool AppInstanceDataTypeHasBeenSet() const { return m_appInstanceDataTypeHasBeenSet; }

    /**
     * <p>The data type of the app instance.</p>
     */
    inline void SetAppInstanceDataType(const AppInstanceDataType& value) { m_appInstanceDataTypeHasBeenSet = true; m_appInstanceDataType = value; }

    /**
     * <p>The data type of the app instance.</p>
     */
    inline void SetAppInstanceDataType(AppInstanceDataType&& value) { m_appInstanceDataTypeHasBeenSet = true; m_appInstanceDataType = std::move(value); }

    /**
     * <p>The data type of the app instance.</p>
     */
    inline AppInstanceStreamingConfiguration& WithAppInstanceDataType(const AppInstanceDataType& value) { SetAppInstanceDataType(value); return *this;}

    /**
     * <p>The data type of the app instance.</p>
     */
    inline AppInstanceStreamingConfiguration& WithAppInstanceDataType(AppInstanceDataType&& value) { SetAppInstanceDataType(std::move(value)); return *this;}


    /**
     * <p>The resource ARN.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The resource ARN.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The resource ARN.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The resource ARN.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The resource ARN.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The resource ARN.</p>
     */
    inline AppInstanceStreamingConfiguration& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The resource ARN.</p>
     */
    inline AppInstanceStreamingConfiguration& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The resource ARN.</p>
     */
    inline AppInstanceStreamingConfiguration& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    AppInstanceDataType m_appInstanceDataType;
    bool m_appInstanceDataTypeHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
