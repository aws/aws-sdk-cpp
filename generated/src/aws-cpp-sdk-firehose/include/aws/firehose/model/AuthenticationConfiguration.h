/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/Connectivity.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The authentication configuration of the Amazon MSK cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/AuthenticationConfiguration">AWS
   * API Reference</a></p>
   */
  class AuthenticationConfiguration
  {
  public:
    AWS_FIREHOSE_API AuthenticationConfiguration();
    AWS_FIREHOSE_API AuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the role used to access the Amazon MSK cluster.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline AuthenticationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline AuthenticationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline AuthenticationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connectivity used to access the Amazon MSK cluster.</p>
     */
    inline const Connectivity& GetConnectivity() const{ return m_connectivity; }
    inline bool ConnectivityHasBeenSet() const { return m_connectivityHasBeenSet; }
    inline void SetConnectivity(const Connectivity& value) { m_connectivityHasBeenSet = true; m_connectivity = value; }
    inline void SetConnectivity(Connectivity&& value) { m_connectivityHasBeenSet = true; m_connectivity = std::move(value); }
    inline AuthenticationConfiguration& WithConnectivity(const Connectivity& value) { SetConnectivity(value); return *this;}
    inline AuthenticationConfiguration& WithConnectivity(Connectivity&& value) { SetConnectivity(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Connectivity m_connectivity;
    bool m_connectivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
