/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/SampleType.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a sample of performance data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Sample">AWS
   * API Reference</a></p>
   */
  class Sample
  {
  public:
    AWS_DEVICEFARM_API Sample();
    AWS_DEVICEFARM_API Sample(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Sample& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sample's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The sample's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The sample's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The sample's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The sample's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The sample's ARN.</p>
     */
    inline Sample& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The sample's ARN.</p>
     */
    inline Sample& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The sample's ARN.</p>
     */
    inline Sample& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The sample's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>CPU: A CPU sample type. This is expressed as the app processing CPU time
     * (including child processes) as reported by process, as a percentage.</p> </li>
     * <li> <p>MEMORY: A memory usage sample type. This is expressed as the total
     * proportional set size of an app process, in kilobytes.</p> </li> <li>
     * <p>NATIVE_AVG_DRAWTIME</p> </li> <li> <p>NATIVE_FPS</p> </li> <li>
     * <p>NATIVE_FRAMES</p> </li> <li> <p>NATIVE_MAX_DRAWTIME</p> </li> <li>
     * <p>NATIVE_MIN_DRAWTIME</p> </li> <li> <p>OPENGL_AVG_DRAWTIME</p> </li> <li>
     * <p>OPENGL_FPS</p> </li> <li> <p>OPENGL_FRAMES</p> </li> <li>
     * <p>OPENGL_MAX_DRAWTIME</p> </li> <li> <p>OPENGL_MIN_DRAWTIME</p> </li> <li>
     * <p>RX</p> </li> <li> <p>RX_RATE: The total number of bytes per second (TCP and
     * UDP) that are sent, by app process.</p> </li> <li> <p>THREADS: A threads sample
     * type. This is expressed as the total number of threads per app process.</p>
     * </li> <li> <p>TX</p> </li> <li> <p>TX_RATE: The total number of bytes per second
     * (TCP and UDP) that are received, by app process.</p> </li> </ul>
     */
    inline const SampleType& GetType() const{ return m_type; }

    /**
     * <p>The sample's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>CPU: A CPU sample type. This is expressed as the app processing CPU time
     * (including child processes) as reported by process, as a percentage.</p> </li>
     * <li> <p>MEMORY: A memory usage sample type. This is expressed as the total
     * proportional set size of an app process, in kilobytes.</p> </li> <li>
     * <p>NATIVE_AVG_DRAWTIME</p> </li> <li> <p>NATIVE_FPS</p> </li> <li>
     * <p>NATIVE_FRAMES</p> </li> <li> <p>NATIVE_MAX_DRAWTIME</p> </li> <li>
     * <p>NATIVE_MIN_DRAWTIME</p> </li> <li> <p>OPENGL_AVG_DRAWTIME</p> </li> <li>
     * <p>OPENGL_FPS</p> </li> <li> <p>OPENGL_FRAMES</p> </li> <li>
     * <p>OPENGL_MAX_DRAWTIME</p> </li> <li> <p>OPENGL_MIN_DRAWTIME</p> </li> <li>
     * <p>RX</p> </li> <li> <p>RX_RATE: The total number of bytes per second (TCP and
     * UDP) that are sent, by app process.</p> </li> <li> <p>THREADS: A threads sample
     * type. This is expressed as the total number of threads per app process.</p>
     * </li> <li> <p>TX</p> </li> <li> <p>TX_RATE: The total number of bytes per second
     * (TCP and UDP) that are received, by app process.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The sample's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>CPU: A CPU sample type. This is expressed as the app processing CPU time
     * (including child processes) as reported by process, as a percentage.</p> </li>
     * <li> <p>MEMORY: A memory usage sample type. This is expressed as the total
     * proportional set size of an app process, in kilobytes.</p> </li> <li>
     * <p>NATIVE_AVG_DRAWTIME</p> </li> <li> <p>NATIVE_FPS</p> </li> <li>
     * <p>NATIVE_FRAMES</p> </li> <li> <p>NATIVE_MAX_DRAWTIME</p> </li> <li>
     * <p>NATIVE_MIN_DRAWTIME</p> </li> <li> <p>OPENGL_AVG_DRAWTIME</p> </li> <li>
     * <p>OPENGL_FPS</p> </li> <li> <p>OPENGL_FRAMES</p> </li> <li>
     * <p>OPENGL_MAX_DRAWTIME</p> </li> <li> <p>OPENGL_MIN_DRAWTIME</p> </li> <li>
     * <p>RX</p> </li> <li> <p>RX_RATE: The total number of bytes per second (TCP and
     * UDP) that are sent, by app process.</p> </li> <li> <p>THREADS: A threads sample
     * type. This is expressed as the total number of threads per app process.</p>
     * </li> <li> <p>TX</p> </li> <li> <p>TX_RATE: The total number of bytes per second
     * (TCP and UDP) that are received, by app process.</p> </li> </ul>
     */
    inline void SetType(const SampleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The sample's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>CPU: A CPU sample type. This is expressed as the app processing CPU time
     * (including child processes) as reported by process, as a percentage.</p> </li>
     * <li> <p>MEMORY: A memory usage sample type. This is expressed as the total
     * proportional set size of an app process, in kilobytes.</p> </li> <li>
     * <p>NATIVE_AVG_DRAWTIME</p> </li> <li> <p>NATIVE_FPS</p> </li> <li>
     * <p>NATIVE_FRAMES</p> </li> <li> <p>NATIVE_MAX_DRAWTIME</p> </li> <li>
     * <p>NATIVE_MIN_DRAWTIME</p> </li> <li> <p>OPENGL_AVG_DRAWTIME</p> </li> <li>
     * <p>OPENGL_FPS</p> </li> <li> <p>OPENGL_FRAMES</p> </li> <li>
     * <p>OPENGL_MAX_DRAWTIME</p> </li> <li> <p>OPENGL_MIN_DRAWTIME</p> </li> <li>
     * <p>RX</p> </li> <li> <p>RX_RATE: The total number of bytes per second (TCP and
     * UDP) that are sent, by app process.</p> </li> <li> <p>THREADS: A threads sample
     * type. This is expressed as the total number of threads per app process.</p>
     * </li> <li> <p>TX</p> </li> <li> <p>TX_RATE: The total number of bytes per second
     * (TCP and UDP) that are received, by app process.</p> </li> </ul>
     */
    inline void SetType(SampleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The sample's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>CPU: A CPU sample type. This is expressed as the app processing CPU time
     * (including child processes) as reported by process, as a percentage.</p> </li>
     * <li> <p>MEMORY: A memory usage sample type. This is expressed as the total
     * proportional set size of an app process, in kilobytes.</p> </li> <li>
     * <p>NATIVE_AVG_DRAWTIME</p> </li> <li> <p>NATIVE_FPS</p> </li> <li>
     * <p>NATIVE_FRAMES</p> </li> <li> <p>NATIVE_MAX_DRAWTIME</p> </li> <li>
     * <p>NATIVE_MIN_DRAWTIME</p> </li> <li> <p>OPENGL_AVG_DRAWTIME</p> </li> <li>
     * <p>OPENGL_FPS</p> </li> <li> <p>OPENGL_FRAMES</p> </li> <li>
     * <p>OPENGL_MAX_DRAWTIME</p> </li> <li> <p>OPENGL_MIN_DRAWTIME</p> </li> <li>
     * <p>RX</p> </li> <li> <p>RX_RATE: The total number of bytes per second (TCP and
     * UDP) that are sent, by app process.</p> </li> <li> <p>THREADS: A threads sample
     * type. This is expressed as the total number of threads per app process.</p>
     * </li> <li> <p>TX</p> </li> <li> <p>TX_RATE: The total number of bytes per second
     * (TCP and UDP) that are received, by app process.</p> </li> </ul>
     */
    inline Sample& WithType(const SampleType& value) { SetType(value); return *this;}

    /**
     * <p>The sample's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>CPU: A CPU sample type. This is expressed as the app processing CPU time
     * (including child processes) as reported by process, as a percentage.</p> </li>
     * <li> <p>MEMORY: A memory usage sample type. This is expressed as the total
     * proportional set size of an app process, in kilobytes.</p> </li> <li>
     * <p>NATIVE_AVG_DRAWTIME</p> </li> <li> <p>NATIVE_FPS</p> </li> <li>
     * <p>NATIVE_FRAMES</p> </li> <li> <p>NATIVE_MAX_DRAWTIME</p> </li> <li>
     * <p>NATIVE_MIN_DRAWTIME</p> </li> <li> <p>OPENGL_AVG_DRAWTIME</p> </li> <li>
     * <p>OPENGL_FPS</p> </li> <li> <p>OPENGL_FRAMES</p> </li> <li>
     * <p>OPENGL_MAX_DRAWTIME</p> </li> <li> <p>OPENGL_MIN_DRAWTIME</p> </li> <li>
     * <p>RX</p> </li> <li> <p>RX_RATE: The total number of bytes per second (TCP and
     * UDP) that are sent, by app process.</p> </li> <li> <p>THREADS: A threads sample
     * type. This is expressed as the total number of threads per app process.</p>
     * </li> <li> <p>TX</p> </li> <li> <p>TX_RATE: The total number of bytes per second
     * (TCP and UDP) that are received, by app process.</p> </li> </ul>
     */
    inline Sample& WithType(SampleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The presigned Amazon S3 URL that can be used with a GET request to download
     * the sample's file.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The presigned Amazon S3 URL that can be used with a GET request to download
     * the sample's file.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The presigned Amazon S3 URL that can be used with a GET request to download
     * the sample's file.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The presigned Amazon S3 URL that can be used with a GET request to download
     * the sample's file.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The presigned Amazon S3 URL that can be used with a GET request to download
     * the sample's file.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The presigned Amazon S3 URL that can be used with a GET request to download
     * the sample's file.</p>
     */
    inline Sample& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The presigned Amazon S3 URL that can be used with a GET request to download
     * the sample's file.</p>
     */
    inline Sample& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The presigned Amazon S3 URL that can be used with a GET request to download
     * the sample's file.</p>
     */
    inline Sample& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    SampleType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
