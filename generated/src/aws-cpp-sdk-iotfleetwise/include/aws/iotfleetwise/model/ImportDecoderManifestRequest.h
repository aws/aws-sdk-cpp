/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/NetworkFileDefinition.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class ImportDecoderManifestRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API ImportDecoderManifestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportDecoderManifest"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the decoder manifest to import. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the decoder manifest to import. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the decoder manifest to import. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the decoder manifest to import. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the decoder manifest to import. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the decoder manifest to import. </p>
     */
    inline ImportDecoderManifestRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the decoder manifest to import. </p>
     */
    inline ImportDecoderManifestRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the decoder manifest to import. </p>
     */
    inline ImportDecoderManifestRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The file to load into an Amazon Web Services account. </p>
     */
    inline const Aws::Vector<NetworkFileDefinition>& GetNetworkFileDefinitions() const{ return m_networkFileDefinitions; }

    /**
     * <p> The file to load into an Amazon Web Services account. </p>
     */
    inline bool NetworkFileDefinitionsHasBeenSet() const { return m_networkFileDefinitionsHasBeenSet; }

    /**
     * <p> The file to load into an Amazon Web Services account. </p>
     */
    inline void SetNetworkFileDefinitions(const Aws::Vector<NetworkFileDefinition>& value) { m_networkFileDefinitionsHasBeenSet = true; m_networkFileDefinitions = value; }

    /**
     * <p> The file to load into an Amazon Web Services account. </p>
     */
    inline void SetNetworkFileDefinitions(Aws::Vector<NetworkFileDefinition>&& value) { m_networkFileDefinitionsHasBeenSet = true; m_networkFileDefinitions = std::move(value); }

    /**
     * <p> The file to load into an Amazon Web Services account. </p>
     */
    inline ImportDecoderManifestRequest& WithNetworkFileDefinitions(const Aws::Vector<NetworkFileDefinition>& value) { SetNetworkFileDefinitions(value); return *this;}

    /**
     * <p> The file to load into an Amazon Web Services account. </p>
     */
    inline ImportDecoderManifestRequest& WithNetworkFileDefinitions(Aws::Vector<NetworkFileDefinition>&& value) { SetNetworkFileDefinitions(std::move(value)); return *this;}

    /**
     * <p> The file to load into an Amazon Web Services account. </p>
     */
    inline ImportDecoderManifestRequest& AddNetworkFileDefinitions(const NetworkFileDefinition& value) { m_networkFileDefinitionsHasBeenSet = true; m_networkFileDefinitions.push_back(value); return *this; }

    /**
     * <p> The file to load into an Amazon Web Services account. </p>
     */
    inline ImportDecoderManifestRequest& AddNetworkFileDefinitions(NetworkFileDefinition&& value) { m_networkFileDefinitionsHasBeenSet = true; m_networkFileDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<NetworkFileDefinition> m_networkFileDefinitions;
    bool m_networkFileDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
