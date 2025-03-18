/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ErrorHandlingConfig.h>
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
   * <p> The properties that are applied when Amazon Redshift is being used as a
   * destination. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/RedshiftDestinationProperties">AWS
   * API Reference</a></p>
   */
  class RedshiftDestinationProperties
  {
  public:
    AWS_APPFLOW_API RedshiftDestinationProperties() = default;
    AWS_APPFLOW_API RedshiftDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API RedshiftDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The object specified in the Amazon Redshift flow destination. </p>
     */
    inline const Aws::String& GetObject() const { return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    template<typename ObjectT = Aws::String>
    void SetObject(ObjectT&& value) { m_objectHasBeenSet = true; m_object = std::forward<ObjectT>(value); }
    template<typename ObjectT = Aws::String>
    RedshiftDestinationProperties& WithObject(ObjectT&& value) { SetObject(std::forward<ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The intermediate bucket that Amazon AppFlow uses when moving data into
     * Amazon Redshift. </p>
     */
    inline const Aws::String& GetIntermediateBucketName() const { return m_intermediateBucketName; }
    inline bool IntermediateBucketNameHasBeenSet() const { return m_intermediateBucketNameHasBeenSet; }
    template<typename IntermediateBucketNameT = Aws::String>
    void SetIntermediateBucketName(IntermediateBucketNameT&& value) { m_intermediateBucketNameHasBeenSet = true; m_intermediateBucketName = std::forward<IntermediateBucketNameT>(value); }
    template<typename IntermediateBucketNameT = Aws::String>
    RedshiftDestinationProperties& WithIntermediateBucketName(IntermediateBucketNameT&& value) { SetIntermediateBucketName(std::forward<IntermediateBucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The object key for the bucket in which Amazon AppFlow places the destination
     * files. </p>
     */
    inline const Aws::String& GetBucketPrefix() const { return m_bucketPrefix; }
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }
    template<typename BucketPrefixT = Aws::String>
    void SetBucketPrefix(BucketPrefixT&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::forward<BucketPrefixT>(value); }
    template<typename BucketPrefixT = Aws::String>
    RedshiftDestinationProperties& WithBucketPrefix(BucketPrefixT&& value) { SetBucketPrefix(std::forward<BucketPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Amazon Redshift destination. For example, this setting would
     * determine if the flow should fail after one insertion error, or continue and
     * attempt to insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const { return m_errorHandlingConfig; }
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    void SetErrorHandlingConfig(ErrorHandlingConfigT&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::forward<ErrorHandlingConfigT>(value); }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    RedshiftDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfigT&& value) { SetErrorHandlingConfig(std::forward<ErrorHandlingConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    Aws::String m_intermediateBucketName;
    bool m_intermediateBucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
