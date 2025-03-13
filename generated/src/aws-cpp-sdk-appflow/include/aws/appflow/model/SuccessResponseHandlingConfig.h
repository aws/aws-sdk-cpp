/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Determines how Amazon AppFlow handles the success response that it gets from
   * the connector after placing data.</p> <p>For example, this setting would
   * determine where to write the response from the destination connector upon a
   * successful insert operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SuccessResponseHandlingConfig">AWS
   * API Reference</a></p>
   */
  class SuccessResponseHandlingConfig
  {
  public:
    AWS_APPFLOW_API SuccessResponseHandlingConfig() = default;
    AWS_APPFLOW_API SuccessResponseHandlingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SuccessResponseHandlingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline const Aws::String& GetBucketPrefix() const { return m_bucketPrefix; }
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }
    template<typename BucketPrefixT = Aws::String>
    void SetBucketPrefix(BucketPrefixT&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::forward<BucketPrefixT>(value); }
    template<typename BucketPrefixT = Aws::String>
    SuccessResponseHandlingConfig& WithBucketPrefix(BucketPrefixT&& value) { SetBucketPrefix(std::forward<BucketPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    SuccessResponseHandlingConfig& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
