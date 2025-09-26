/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultLocationType.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultS3Location.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultWebLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultConfluenceLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultSalesforceLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultSharePointLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultCustomDocumentLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultKendraDocumentLocation.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultSqlLocation.h>
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
   * response</a> – in the <code>location</code> field</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalResultLocation">AWS
   * API Reference</a></p>
   */
  class RetrievalResultLocation
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocation() = default;
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of data source location.</p>
     */
    inline RetrievalResultLocationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RetrievalResultLocationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RetrievalResultLocation& WithType(RetrievalResultLocationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 data source location.</p>
     */
    inline const RetrievalResultS3Location& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = RetrievalResultS3Location>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = RetrievalResultS3Location>
    RetrievalResultLocation& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The web URL/URLs data source location.</p>
     */
    inline const RetrievalResultWebLocation& GetWebLocation() const { return m_webLocation; }
    inline bool WebLocationHasBeenSet() const { return m_webLocationHasBeenSet; }
    template<typename WebLocationT = RetrievalResultWebLocation>
    void SetWebLocation(WebLocationT&& value) { m_webLocationHasBeenSet = true; m_webLocation = std::forward<WebLocationT>(value); }
    template<typename WebLocationT = RetrievalResultWebLocation>
    RetrievalResultLocation& WithWebLocation(WebLocationT&& value) { SetWebLocation(std::forward<WebLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Confluence data source location.</p>
     */
    inline const RetrievalResultConfluenceLocation& GetConfluenceLocation() const { return m_confluenceLocation; }
    inline bool ConfluenceLocationHasBeenSet() const { return m_confluenceLocationHasBeenSet; }
    template<typename ConfluenceLocationT = RetrievalResultConfluenceLocation>
    void SetConfluenceLocation(ConfluenceLocationT&& value) { m_confluenceLocationHasBeenSet = true; m_confluenceLocation = std::forward<ConfluenceLocationT>(value); }
    template<typename ConfluenceLocationT = RetrievalResultConfluenceLocation>
    RetrievalResultLocation& WithConfluenceLocation(ConfluenceLocationT&& value) { SetConfluenceLocation(std::forward<ConfluenceLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Salesforce data source location.</p>
     */
    inline const RetrievalResultSalesforceLocation& GetSalesforceLocation() const { return m_salesforceLocation; }
    inline bool SalesforceLocationHasBeenSet() const { return m_salesforceLocationHasBeenSet; }
    template<typename SalesforceLocationT = RetrievalResultSalesforceLocation>
    void SetSalesforceLocation(SalesforceLocationT&& value) { m_salesforceLocationHasBeenSet = true; m_salesforceLocation = std::forward<SalesforceLocationT>(value); }
    template<typename SalesforceLocationT = RetrievalResultSalesforceLocation>
    RetrievalResultLocation& WithSalesforceLocation(SalesforceLocationT&& value) { SetSalesforceLocation(std::forward<SalesforceLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SharePoint data source location.</p>
     */
    inline const RetrievalResultSharePointLocation& GetSharePointLocation() const { return m_sharePointLocation; }
    inline bool SharePointLocationHasBeenSet() const { return m_sharePointLocationHasBeenSet; }
    template<typename SharePointLocationT = RetrievalResultSharePointLocation>
    void SetSharePointLocation(SharePointLocationT&& value) { m_sharePointLocationHasBeenSet = true; m_sharePointLocation = std::forward<SharePointLocationT>(value); }
    template<typename SharePointLocationT = RetrievalResultSharePointLocation>
    RetrievalResultLocation& WithSharePointLocation(SharePointLocationT&& value) { SetSharePointLocation(std::forward<SharePointLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location of a document in a custom data source.</p>
     */
    inline const RetrievalResultCustomDocumentLocation& GetCustomDocumentLocation() const { return m_customDocumentLocation; }
    inline bool CustomDocumentLocationHasBeenSet() const { return m_customDocumentLocationHasBeenSet; }
    template<typename CustomDocumentLocationT = RetrievalResultCustomDocumentLocation>
    void SetCustomDocumentLocation(CustomDocumentLocationT&& value) { m_customDocumentLocationHasBeenSet = true; m_customDocumentLocation = std::forward<CustomDocumentLocationT>(value); }
    template<typename CustomDocumentLocationT = RetrievalResultCustomDocumentLocation>
    RetrievalResultLocation& WithCustomDocumentLocation(CustomDocumentLocationT&& value) { SetCustomDocumentLocation(std::forward<CustomDocumentLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of a document in Amazon Kendra.</p>
     */
    inline const RetrievalResultKendraDocumentLocation& GetKendraDocumentLocation() const { return m_kendraDocumentLocation; }
    inline bool KendraDocumentLocationHasBeenSet() const { return m_kendraDocumentLocationHasBeenSet; }
    template<typename KendraDocumentLocationT = RetrievalResultKendraDocumentLocation>
    void SetKendraDocumentLocation(KendraDocumentLocationT&& value) { m_kendraDocumentLocationHasBeenSet = true; m_kendraDocumentLocation = std::forward<KendraDocumentLocationT>(value); }
    template<typename KendraDocumentLocationT = RetrievalResultKendraDocumentLocation>
    RetrievalResultLocation& WithKendraDocumentLocation(KendraDocumentLocationT&& value) { SetKendraDocumentLocation(std::forward<KendraDocumentLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the SQL query used to retrieve the result.</p>
     */
    inline const RetrievalResultSqlLocation& GetSqlLocation() const { return m_sqlLocation; }
    inline bool SqlLocationHasBeenSet() const { return m_sqlLocationHasBeenSet; }
    template<typename SqlLocationT = RetrievalResultSqlLocation>
    void SetSqlLocation(SqlLocationT&& value) { m_sqlLocationHasBeenSet = true; m_sqlLocation = std::forward<SqlLocationT>(value); }
    template<typename SqlLocationT = RetrievalResultSqlLocation>
    RetrievalResultLocation& WithSqlLocation(SqlLocationT&& value) { SetSqlLocation(std::forward<SqlLocationT>(value)); return *this;}
    ///@}
  private:

    RetrievalResultLocationType m_type{RetrievalResultLocationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    RetrievalResultS3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    RetrievalResultWebLocation m_webLocation;
    bool m_webLocationHasBeenSet = false;

    RetrievalResultConfluenceLocation m_confluenceLocation;
    bool m_confluenceLocationHasBeenSet = false;

    RetrievalResultSalesforceLocation m_salesforceLocation;
    bool m_salesforceLocationHasBeenSet = false;

    RetrievalResultSharePointLocation m_sharePointLocation;
    bool m_sharePointLocationHasBeenSet = false;

    RetrievalResultCustomDocumentLocation m_customDocumentLocation;
    bool m_customDocumentLocationHasBeenSet = false;

    RetrievalResultKendraDocumentLocation m_kendraDocumentLocation;
    bool m_kendraDocumentLocationHasBeenSet = false;

    RetrievalResultSqlLocation m_sqlLocation;
    bool m_sqlLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
