/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Amazon S3 properties of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/S3PropertiesInput">AWS
   * API Reference</a></p>
   */
  class S3PropertiesInput
  {
  public:
    AWS_DATAZONE_API S3PropertiesInput() = default;
    AWS_DATAZONE_API S3PropertiesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API S3PropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 Access Grant location ID that's part of the Amazon S3
     * properties of a connection.</p>
     */
    inline const Aws::String& GetS3AccessGrantLocationId() const { return m_s3AccessGrantLocationId; }
    inline bool S3AccessGrantLocationIdHasBeenSet() const { return m_s3AccessGrantLocationIdHasBeenSet; }
    template<typename S3AccessGrantLocationIdT = Aws::String>
    void SetS3AccessGrantLocationId(S3AccessGrantLocationIdT&& value) { m_s3AccessGrantLocationIdHasBeenSet = true; m_s3AccessGrantLocationId = std::forward<S3AccessGrantLocationIdT>(value); }
    template<typename S3AccessGrantLocationIdT = Aws::String>
    S3PropertiesInput& WithS3AccessGrantLocationId(S3AccessGrantLocationIdT&& value) { SetS3AccessGrantLocationId(std::forward<S3AccessGrantLocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI that's part of the Amazon S3 properties of a
     * connection.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    S3PropertiesInput& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3AccessGrantLocationId;
    bool m_s3AccessGrantLocationIdHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
