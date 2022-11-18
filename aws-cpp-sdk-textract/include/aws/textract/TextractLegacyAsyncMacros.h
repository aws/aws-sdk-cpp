/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AnalyzeDocumentAsync(...)  SubmitAsync(&TextractClient::AnalyzeDocument, __VA_ARGS__)
#define AnalyzeDocumentCallable(REQUEST)  SubmitCallable(&TextractClient::AnalyzeDocument, REQUEST)

#define AnalyzeExpenseAsync(...)  SubmitAsync(&TextractClient::AnalyzeExpense, __VA_ARGS__)
#define AnalyzeExpenseCallable(REQUEST)  SubmitCallable(&TextractClient::AnalyzeExpense, REQUEST)

#define AnalyzeIDAsync(...)  SubmitAsync(&TextractClient::AnalyzeID, __VA_ARGS__)
#define AnalyzeIDCallable(REQUEST)  SubmitCallable(&TextractClient::AnalyzeID, REQUEST)

#define DetectDocumentTextAsync(...)  SubmitAsync(&TextractClient::DetectDocumentText, __VA_ARGS__)
#define DetectDocumentTextCallable(REQUEST)  SubmitCallable(&TextractClient::DetectDocumentText, REQUEST)

#define GetDocumentAnalysisAsync(...)  SubmitAsync(&TextractClient::GetDocumentAnalysis, __VA_ARGS__)
#define GetDocumentAnalysisCallable(REQUEST)  SubmitCallable(&TextractClient::GetDocumentAnalysis, REQUEST)

#define GetDocumentTextDetectionAsync(...)  SubmitAsync(&TextractClient::GetDocumentTextDetection, __VA_ARGS__)
#define GetDocumentTextDetectionCallable(REQUEST)  SubmitCallable(&TextractClient::GetDocumentTextDetection, REQUEST)

#define GetExpenseAnalysisAsync(...)  SubmitAsync(&TextractClient::GetExpenseAnalysis, __VA_ARGS__)
#define GetExpenseAnalysisCallable(REQUEST)  SubmitCallable(&TextractClient::GetExpenseAnalysis, REQUEST)

#define StartDocumentAnalysisAsync(...)  SubmitAsync(&TextractClient::StartDocumentAnalysis, __VA_ARGS__)
#define StartDocumentAnalysisCallable(REQUEST)  SubmitCallable(&TextractClient::StartDocumentAnalysis, REQUEST)

#define StartDocumentTextDetectionAsync(...)  SubmitAsync(&TextractClient::StartDocumentTextDetection, __VA_ARGS__)
#define StartDocumentTextDetectionCallable(REQUEST)  SubmitCallable(&TextractClient::StartDocumentTextDetection, REQUEST)

#define StartExpenseAnalysisAsync(...)  SubmitAsync(&TextractClient::StartExpenseAnalysis, __VA_ARGS__)
#define StartExpenseAnalysisCallable(REQUEST)  SubmitCallable(&TextractClient::StartExpenseAnalysis, REQUEST)

