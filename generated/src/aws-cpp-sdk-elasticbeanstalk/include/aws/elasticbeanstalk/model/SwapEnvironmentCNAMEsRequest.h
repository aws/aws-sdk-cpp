/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Swaps the CNAMEs of two environments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SwapEnvironmentCNAMEsMessage">AWS
   * API Reference</a></p>
   */
  class SwapEnvironmentCNAMEsRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API SwapEnvironmentCNAMEsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SwapEnvironmentCNAMEs"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentId</code>, you must specify the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline const Aws::String& GetSourceEnvironmentId() const { return m_sourceEnvironmentId; }
    inline bool SourceEnvironmentIdHasBeenSet() const { return m_sourceEnvironmentIdHasBeenSet; }
    template<typename SourceEnvironmentIdT = Aws::String>
    void SetSourceEnvironmentId(SourceEnvironmentIdT&& value) { m_sourceEnvironmentIdHasBeenSet = true; m_sourceEnvironmentId = std::forward<SourceEnvironmentIdT>(value); }
    template<typename SourceEnvironmentIdT = Aws::String>
    SwapEnvironmentCNAMEsRequest& WithSourceEnvironmentId(SourceEnvironmentIdT&& value) { SetSourceEnvironmentId(std::forward<SourceEnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentName</code>, you must specify the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline const Aws::String& GetSourceEnvironmentName() const { return m_sourceEnvironmentName; }
    inline bool SourceEnvironmentNameHasBeenSet() const { return m_sourceEnvironmentNameHasBeenSet; }
    template<typename SourceEnvironmentNameT = Aws::String>
    void SetSourceEnvironmentName(SourceEnvironmentNameT&& value) { m_sourceEnvironmentNameHasBeenSet = true; m_sourceEnvironmentName = std::forward<SourceEnvironmentNameT>(value); }
    template<typename SourceEnvironmentNameT = Aws::String>
    SwapEnvironmentCNAMEsRequest& WithSourceEnvironmentName(SourceEnvironmentNameT&& value) { SetSourceEnvironmentName(std::forward<SourceEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination environment.</p> <p> Condition: You must specify at
     * least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentId</code> with the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline const Aws::String& GetDestinationEnvironmentId() const { return m_destinationEnvironmentId; }
    inline bool DestinationEnvironmentIdHasBeenSet() const { return m_destinationEnvironmentIdHasBeenSet; }
    template<typename DestinationEnvironmentIdT = Aws::String>
    void SetDestinationEnvironmentId(DestinationEnvironmentIdT&& value) { m_destinationEnvironmentIdHasBeenSet = true; m_destinationEnvironmentId = std::forward<DestinationEnvironmentIdT>(value); }
    template<typename DestinationEnvironmentIdT = Aws::String>
    SwapEnvironmentCNAMEsRequest& WithDestinationEnvironmentId(DestinationEnvironmentIdT&& value) { SetDestinationEnvironmentId(std::forward<DestinationEnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination environment.</p> <p> Condition: You must specify
     * at least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentName</code> with the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline const Aws::String& GetDestinationEnvironmentName() const { return m_destinationEnvironmentName; }
    inline bool DestinationEnvironmentNameHasBeenSet() const { return m_destinationEnvironmentNameHasBeenSet; }
    template<typename DestinationEnvironmentNameT = Aws::String>
    void SetDestinationEnvironmentName(DestinationEnvironmentNameT&& value) { m_destinationEnvironmentNameHasBeenSet = true; m_destinationEnvironmentName = std::forward<DestinationEnvironmentNameT>(value); }
    template<typename DestinationEnvironmentNameT = Aws::String>
    SwapEnvironmentCNAMEsRequest& WithDestinationEnvironmentName(DestinationEnvironmentNameT&& value) { SetDestinationEnvironmentName(std::forward<DestinationEnvironmentNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceEnvironmentId;
    bool m_sourceEnvironmentIdHasBeenSet = false;

    Aws::String m_sourceEnvironmentName;
    bool m_sourceEnvironmentNameHasBeenSet = false;

    Aws::String m_destinationEnvironmentId;
    bool m_destinationEnvironmentIdHasBeenSet = false;

    Aws::String m_destinationEnvironmentName;
    bool m_destinationEnvironmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
