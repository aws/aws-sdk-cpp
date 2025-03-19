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
    AWS_DEVICEFARM_API Sample() = default;
    AWS_DEVICEFARM_API Sample(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Sample& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sample's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Sample& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
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
    inline SampleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SampleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Sample& WithType(SampleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presigned Amazon S3 URL that can be used with a GET request to download
     * the sample's file.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    Sample& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    SampleType m_type{SampleType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
