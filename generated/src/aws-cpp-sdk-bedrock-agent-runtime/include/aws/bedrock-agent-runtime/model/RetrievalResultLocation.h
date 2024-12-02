/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultConfluenceLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultCustomDocumentLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultS3Location.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultSalesforceLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultSharePointLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultLocationType.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultWebLocation.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information about the data source location.</p> <p>This data type is
   * used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_ResponseSyntax">Retrieve
   * response</a> – in the <code>location</code> field</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_ResponseSyntax">RetrieveAndGenerate
   * response</a> – in the <code>location</code> field</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> – in the <code>locatino</code> field</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalResultLocation">AWS
   * API Reference</a></p>
   */
  class RetrievalResultLocation
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocation();
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Confluence data source location.</p>
     */
    inline const RetrievalResultConfluenceLocation& GetConfluenceLocation() const{ return m_confluenceLocation; }
    inline bool ConfluenceLocationHasBeenSet() const { return m_confluenceLocationHasBeenSet; }
    inline void SetConfluenceLocation(const RetrievalResultConfluenceLocation& value) { m_confluenceLocationHasBeenSet = true; m_confluenceLocation = value; }
    inline void SetConfluenceLocation(RetrievalResultConfluenceLocation&& value) { m_confluenceLocationHasBeenSet = true; m_confluenceLocation = std::move(value); }
    inline RetrievalResultLocation& WithConfluenceLocation(const RetrievalResultConfluenceLocation& value) { SetConfluenceLocation(value); return *this;}
    inline RetrievalResultLocation& WithConfluenceLocation(RetrievalResultConfluenceLocation&& value) { SetConfluenceLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location of a document in a custom data source.</p>
     */
    inline const RetrievalResultCustomDocumentLocation& GetCustomDocumentLocation() const{ return m_customDocumentLocation; }
    inline bool CustomDocumentLocationHasBeenSet() const { return m_customDocumentLocationHasBeenSet; }
    inline void SetCustomDocumentLocation(const RetrievalResultCustomDocumentLocation& value) { m_customDocumentLocationHasBeenSet = true; m_customDocumentLocation = value; }
    inline void SetCustomDocumentLocation(RetrievalResultCustomDocumentLocation&& value) { m_customDocumentLocationHasBeenSet = true; m_customDocumentLocation = std::move(value); }
    inline RetrievalResultLocation& WithCustomDocumentLocation(const RetrievalResultCustomDocumentLocation& value) { SetCustomDocumentLocation(value); return *this;}
    inline RetrievalResultLocation& WithCustomDocumentLocation(RetrievalResultCustomDocumentLocation&& value) { SetCustomDocumentLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 data source location.</p>
     */
    inline const RetrievalResultS3Location& GetS3Location() const{ return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    inline void SetS3Location(const RetrievalResultS3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }
    inline void SetS3Location(RetrievalResultS3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }
    inline RetrievalResultLocation& WithS3Location(const RetrievalResultS3Location& value) { SetS3Location(value); return *this;}
    inline RetrievalResultLocation& WithS3Location(RetrievalResultS3Location&& value) { SetS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Salesforce data source location.</p>
     */
    inline const RetrievalResultSalesforceLocation& GetSalesforceLocation() const{ return m_salesforceLocation; }
    inline bool SalesforceLocationHasBeenSet() const { return m_salesforceLocationHasBeenSet; }
    inline void SetSalesforceLocation(const RetrievalResultSalesforceLocation& value) { m_salesforceLocationHasBeenSet = true; m_salesforceLocation = value; }
    inline void SetSalesforceLocation(RetrievalResultSalesforceLocation&& value) { m_salesforceLocationHasBeenSet = true; m_salesforceLocation = std::move(value); }
    inline RetrievalResultLocation& WithSalesforceLocation(const RetrievalResultSalesforceLocation& value) { SetSalesforceLocation(value); return *this;}
    inline RetrievalResultLocation& WithSalesforceLocation(RetrievalResultSalesforceLocation&& value) { SetSalesforceLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SharePoint data source location.</p>
     */
    inline const RetrievalResultSharePointLocation& GetSharePointLocation() const{ return m_sharePointLocation; }
    inline bool SharePointLocationHasBeenSet() const { return m_sharePointLocationHasBeenSet; }
    inline void SetSharePointLocation(const RetrievalResultSharePointLocation& value) { m_sharePointLocationHasBeenSet = true; m_sharePointLocation = value; }
    inline void SetSharePointLocation(RetrievalResultSharePointLocation&& value) { m_sharePointLocationHasBeenSet = true; m_sharePointLocation = std::move(value); }
    inline RetrievalResultLocation& WithSharePointLocation(const RetrievalResultSharePointLocation& value) { SetSharePointLocation(value); return *this;}
    inline RetrievalResultLocation& WithSharePointLocation(RetrievalResultSharePointLocation&& value) { SetSharePointLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data source location.</p>
     */
    inline const RetrievalResultLocationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RetrievalResultLocationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RetrievalResultLocationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RetrievalResultLocation& WithType(const RetrievalResultLocationType& value) { SetType(value); return *this;}
    inline RetrievalResultLocation& WithType(RetrievalResultLocationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The web URL/URLs data source location.</p>
     */
    inline const RetrievalResultWebLocation& GetWebLocation() const{ return m_webLocation; }
    inline bool WebLocationHasBeenSet() const { return m_webLocationHasBeenSet; }
    inline void SetWebLocation(const RetrievalResultWebLocation& value) { m_webLocationHasBeenSet = true; m_webLocation = value; }
    inline void SetWebLocation(RetrievalResultWebLocation&& value) { m_webLocationHasBeenSet = true; m_webLocation = std::move(value); }
    inline RetrievalResultLocation& WithWebLocation(const RetrievalResultWebLocation& value) { SetWebLocation(value); return *this;}
    inline RetrievalResultLocation& WithWebLocation(RetrievalResultWebLocation&& value) { SetWebLocation(std::move(value)); return *this;}
    ///@}
  private:

    RetrievalResultConfluenceLocation m_confluenceLocation;
    bool m_confluenceLocationHasBeenSet = false;

    RetrievalResultCustomDocumentLocation m_customDocumentLocation;
    bool m_customDocumentLocationHasBeenSet = false;

    RetrievalResultS3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    RetrievalResultSalesforceLocation m_salesforceLocation;
    bool m_salesforceLocationHasBeenSet = false;

    RetrievalResultSharePointLocation m_sharePointLocation;
    bool m_sharePointLocationHasBeenSet = false;

    RetrievalResultLocationType m_type;
    bool m_typeHasBeenSet = false;

    RetrievalResultWebLocation m_webLocation;
    bool m_webLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
