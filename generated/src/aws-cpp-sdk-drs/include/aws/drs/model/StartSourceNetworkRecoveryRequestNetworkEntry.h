/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>An object representing the Source Network to recover.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartSourceNetworkRecoveryRequestNetworkEntry">AWS
   * API Reference</a></p>
   */
  class StartSourceNetworkRecoveryRequestNetworkEntry
  {
  public:
    AWS_DRS_API StartSourceNetworkRecoveryRequestNetworkEntry();
    AWS_DRS_API StartSourceNetworkRecoveryRequestNetworkEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API StartSourceNetworkRecoveryRequestNetworkEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>CloudFormation stack name to be used for recovering the network.</p>
     */
    inline const Aws::String& GetCfnStackName() const{ return m_cfnStackName; }

    /**
     * <p>CloudFormation stack name to be used for recovering the network.</p>
     */
    inline bool CfnStackNameHasBeenSet() const { return m_cfnStackNameHasBeenSet; }

    /**
     * <p>CloudFormation stack name to be used for recovering the network.</p>
     */
    inline void SetCfnStackName(const Aws::String& value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName = value; }

    /**
     * <p>CloudFormation stack name to be used for recovering the network.</p>
     */
    inline void SetCfnStackName(Aws::String&& value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName = std::move(value); }

    /**
     * <p>CloudFormation stack name to be used for recovering the network.</p>
     */
    inline void SetCfnStackName(const char* value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName.assign(value); }

    /**
     * <p>CloudFormation stack name to be used for recovering the network.</p>
     */
    inline StartSourceNetworkRecoveryRequestNetworkEntry& WithCfnStackName(const Aws::String& value) { SetCfnStackName(value); return *this;}

    /**
     * <p>CloudFormation stack name to be used for recovering the network.</p>
     */
    inline StartSourceNetworkRecoveryRequestNetworkEntry& WithCfnStackName(Aws::String&& value) { SetCfnStackName(std::move(value)); return *this;}

    /**
     * <p>CloudFormation stack name to be used for recovering the network.</p>
     */
    inline StartSourceNetworkRecoveryRequestNetworkEntry& WithCfnStackName(const char* value) { SetCfnStackName(value); return *this;}


    /**
     * <p>The ID of the Source Network you want to recover.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const{ return m_sourceNetworkID; }

    /**
     * <p>The ID of the Source Network you want to recover.</p>
     */
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }

    /**
     * <p>The ID of the Source Network you want to recover.</p>
     */
    inline void SetSourceNetworkID(const Aws::String& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = value; }

    /**
     * <p>The ID of the Source Network you want to recover.</p>
     */
    inline void SetSourceNetworkID(Aws::String&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::move(value); }

    /**
     * <p>The ID of the Source Network you want to recover.</p>
     */
    inline void SetSourceNetworkID(const char* value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID.assign(value); }

    /**
     * <p>The ID of the Source Network you want to recover.</p>
     */
    inline StartSourceNetworkRecoveryRequestNetworkEntry& WithSourceNetworkID(const Aws::String& value) { SetSourceNetworkID(value); return *this;}

    /**
     * <p>The ID of the Source Network you want to recover.</p>
     */
    inline StartSourceNetworkRecoveryRequestNetworkEntry& WithSourceNetworkID(Aws::String&& value) { SetSourceNetworkID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Source Network you want to recover.</p>
     */
    inline StartSourceNetworkRecoveryRequestNetworkEntry& WithSourceNetworkID(const char* value) { SetSourceNetworkID(value); return *this;}

  private:

    Aws::String m_cfnStackName;
    bool m_cfnStackNameHasBeenSet = false;

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
