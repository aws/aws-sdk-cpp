/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/SupplementalDataStorageLocationType.h>
#include <aws/bedrock-agent/model/S3Location.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains information about a storage location for images extracted from
   * multimodal documents in your data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SupplementalDataStorageLocation">AWS
   * API Reference</a></p>
   */
  class SupplementalDataStorageLocation
  {
  public:
    AWS_BEDROCKAGENT_API SupplementalDataStorageLocation() = default;
    AWS_BEDROCKAGENT_API SupplementalDataStorageLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SupplementalDataStorageLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the storage service used for this location.</p>
     */
    inline SupplementalDataStorageLocationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SupplementalDataStorageLocationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SupplementalDataStorageLocation& WithType(SupplementalDataStorageLocationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon S3 location for the extracted
     * images.</p>
     */
    inline const S3Location& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = S3Location>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = S3Location>
    SupplementalDataStorageLocation& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}
  private:

    SupplementalDataStorageLocationType m_type{SupplementalDataStorageLocationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
