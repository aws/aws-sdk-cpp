/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/SupplementalDataStorageLocation.h>
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
   * <p>Specifies configurations for the storage location of the images extracted
   * from multimodal documents in your data source. These images can be retrieved and
   * returned to the end user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SupplementalDataStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class SupplementalDataStorageConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API SupplementalDataStorageConfiguration();
    AWS_BEDROCKAGENT_API SupplementalDataStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SupplementalDataStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of objects specifying storage locations for images extracted from
     * multimodal documents in your data source.</p>
     */
    inline const Aws::Vector<SupplementalDataStorageLocation>& GetStorageLocations() const{ return m_storageLocations; }
    inline bool StorageLocationsHasBeenSet() const { return m_storageLocationsHasBeenSet; }
    inline void SetStorageLocations(const Aws::Vector<SupplementalDataStorageLocation>& value) { m_storageLocationsHasBeenSet = true; m_storageLocations = value; }
    inline void SetStorageLocations(Aws::Vector<SupplementalDataStorageLocation>&& value) { m_storageLocationsHasBeenSet = true; m_storageLocations = std::move(value); }
    inline SupplementalDataStorageConfiguration& WithStorageLocations(const Aws::Vector<SupplementalDataStorageLocation>& value) { SetStorageLocations(value); return *this;}
    inline SupplementalDataStorageConfiguration& WithStorageLocations(Aws::Vector<SupplementalDataStorageLocation>&& value) { SetStorageLocations(std::move(value)); return *this;}
    inline SupplementalDataStorageConfiguration& AddStorageLocations(const SupplementalDataStorageLocation& value) { m_storageLocationsHasBeenSet = true; m_storageLocations.push_back(value); return *this; }
    inline SupplementalDataStorageConfiguration& AddStorageLocations(SupplementalDataStorageLocation&& value) { m_storageLocationsHasBeenSet = true; m_storageLocations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SupplementalDataStorageLocation> m_storageLocations;
    bool m_storageLocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
