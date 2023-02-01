/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>A structure that encapsulates, or contains, the media storage configuration
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/MappedResourceConfigurationListItem">AWS
   * API Reference</a></p>
   */
  class MappedResourceConfigurationListItem
  {
  public:
    AWS_KINESISVIDEO_API MappedResourceConfigurationListItem();
    AWS_KINESISVIDEO_API MappedResourceConfigurationListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API MappedResourceConfigurationListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the associated resource for the kinesis video stream.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the associated resource for the kinesis video stream.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the associated resource for the kinesis video stream.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the associated resource for the kinesis video stream.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the associated resource for the kinesis video stream.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the associated resource for the kinesis video stream.</p>
     */
    inline MappedResourceConfigurationListItem& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the associated resource for the kinesis video stream.</p>
     */
    inline MappedResourceConfigurationListItem& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the associated resource for the kinesis video stream.</p>
     */
    inline MappedResourceConfigurationListItem& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Video Stream resource,
     * associated with the stream.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Video Stream resource,
     * associated with the stream.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Video Stream resource,
     * associated with the stream.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Video Stream resource,
     * associated with the stream.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Video Stream resource,
     * associated with the stream.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Video Stream resource,
     * associated with the stream.</p>
     */
    inline MappedResourceConfigurationListItem& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Video Stream resource,
     * associated with the stream.</p>
     */
    inline MappedResourceConfigurationListItem& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Video Stream resource,
     * associated with the stream.</p>
     */
    inline MappedResourceConfigurationListItem& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
