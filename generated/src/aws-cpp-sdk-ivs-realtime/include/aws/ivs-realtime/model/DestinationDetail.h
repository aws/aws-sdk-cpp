/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/S3Detail.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Complex data type that defines destination-detail objects.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/DestinationDetail">AWS
   * API Reference</a></p>
   */
  class DestinationDetail
  {
  public:
    AWS_IVSREALTIME_API DestinationDetail() = default;
    AWS_IVSREALTIME_API DestinationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API DestinationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An S3 detail object to return information about the S3 destination.</p>
     */
    inline const S3Detail& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3Detail>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3Detail>
    DestinationDetail& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}
  private:

    S3Detail m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
