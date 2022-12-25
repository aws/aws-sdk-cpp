/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/waf-regional/WAFRegionalServiceClientModel.h>

namespace Aws
{
namespace WAFRegional
{
  /**
   *  <p>This is <b>AWS WAF Classic Regional</b> documentation. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>This is the <i>AWS WAF
   * Regional Classic API Reference</i> for using AWS WAF Classic with the AWS
   * resources, Elastic Load Balancing (ELB) Application Load Balancers and API
   * Gateway APIs. The AWS WAF Classic actions and data types listed in the reference
   * are available for protecting Elastic Load Balancing (ELB) Application Load
   * Balancers and API Gateway APIs. You can use these actions and data types by
   * means of the endpoints listed in <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS
   * Regions and Endpoints</a>. This guide is for developers who need detailed
   * information about the AWS WAF Classic API actions, data types, and errors. For
   * detailed information about AWS WAF Classic features and an overview of how to
   * use the AWS WAF Classic API, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p>
   */
  class AWS_WAFREGIONAL_API WAFRegionalClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WAFRegionalClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFRegionalClient(const Aws::WAFRegional::WAFRegionalClientConfiguration& clientConfiguration = Aws::WAFRegional::WAFRegionalClientConfiguration(),
                          std::shared_ptr<WAFRegionalEndpointProviderBase> endpointProvider = Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFRegionalClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<WAFRegionalEndpointProviderBase> endpointProvider = Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG),
                          const Aws::WAFRegional::WAFRegionalClientConfiguration& clientConfiguration = Aws::WAFRegional::WAFRegionalClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WAFRegionalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<WAFRegionalEndpointProviderBase> endpointProvider = Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG),
                          const Aws::WAFRegional::WAFRegionalClientConfiguration& clientConfiguration = Aws::WAFRegional::WAFRegionalClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFRegionalClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFRegionalClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WAFRegionalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WAFRegionalClient();

        /**
         *  <p>This is <b>AWS WAF Classic Regional</b> documentation. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Associates a web ACL with
         * a resource, either an application load balancer or Amazon API Gateway
         * stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/AssociateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWebACLOutcome AssociateWebACL(const Model::AssociateWebACLRequest& request) const;

        /**
         * A Callable wrapper for AssociateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWebACLOutcomeCallable AssociateWebACLCallable(const Model::AssociateWebACLRequest& request) const;

        /**
         * An Async wrapper for AssociateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWebACLAsync(const Model::AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>ByteMatchSet</code>. You then use <a>UpdateByteMatchSet</a> to identify
         * the part of a web request that you want AWS WAF to inspect, such as the values
         * of the <code>User-Agent</code> header or the query string. For example, you can
         * create a <code>ByteMatchSet</code> that matches any requests with
         * <code>User-Agent</code> headers that contain the string <code>BadBot</code>. You
         * can then configure AWS WAF to reject those requests.</p> <p>To create and
         * configure a <code>ByteMatchSet</code>, perform the following steps:</p> <ol>
         * <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide in
         * the <code>ChangeToken</code> parameter of a <code>CreateByteMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateByteMatchSet</code> request.</p>
         * </li> <li> <p>Use <code>GetChangeToken</code> to get the change token that you
         * provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateByteMatchSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateByteMatchSet</a> request to specify the part of the request that you
         * want AWS WAF to inspect (for example, the header or the URI) and the value that
         * you want AWS WAF to watch for.</p> </li> </ol> <p>For more information about how
         * to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateByteMatchSetOutcome CreateByteMatchSet(const Model::CreateByteMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateByteMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateByteMatchSetOutcomeCallable CreateByteMatchSetCallable(const Model::CreateByteMatchSetRequest& request) const;

        /**
         * An Async wrapper for CreateByteMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateByteMatchSetAsync(const Model::CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates an
         * <a>GeoMatchSet</a>, which you use to specify which web requests you want to
         * allow or block based on the country that the requests originate from. For
         * example, if you're receiving a lot of requests from one or more countries and
         * you want to block the requests, you can create an <code>GeoMatchSet</code> that
         * contains those countries and then configure AWS WAF to block the requests. </p>
         * <p>To create and configure a <code>GeoMatchSet</code>, perform the following
         * steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get the change token that
         * you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateGeoMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateGeoMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateGeoMatchSet</a> request.</p>
         * </li> <li> <p>Submit an <code>UpdateGeoMatchSetSet</code> request to specify the
         * countries that you want AWS WAF to watch for.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGeoMatchSetOutcome CreateGeoMatchSet(const Model::CreateGeoMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateGeoMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGeoMatchSetOutcomeCallable CreateGeoMatchSetCallable(const Model::CreateGeoMatchSetRequest& request) const;

        /**
         * An Async wrapper for CreateGeoMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGeoMatchSetAsync(const Model::CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates an <a>IPSet</a>,
         * which you use to specify which web requests that you want to allow or block
         * based on the IP addresses that the requests originate from. For example, if
         * you're receiving a lot of requests from one or more individual IP addresses or
         * one or more ranges of IP addresses and you want to block the requests, you can
         * create an <code>IPSet</code> that contains those IP addresses and then configure
         * AWS WAF to block the requests. </p> <p>To create and configure an
         * <code>IPSet</code>, perform the following steps:</p> <ol> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateIPSet</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateIPSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateIPSet</code> request to specify the IP addresses
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIPSetOutcome CreateIPSet(const Model::CreateIPSetRequest& request) const;

        /**
         * A Callable wrapper for CreateIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIPSetOutcomeCallable CreateIPSetCallable(const Model::CreateIPSetRequest& request) const;

        /**
         * An Async wrapper for CreateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIPSetAsync(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <a>RateBasedRule</a>. The <code>RateBasedRule</code> contains a
         * <code>RateLimit</code>, which specifies the maximum number of requests that AWS
         * WAF allows from a specified IP address in a five-minute period. The
         * <code>RateBasedRule</code> also contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to count or block if these requests exceed the
         * <code>RateLimit</code>.</p> <p>If you add more than one predicate to a
         * <code>RateBasedRule</code>, a request not only must exceed the
         * <code>RateLimit</code>, but it also must match all the conditions to be counted
         * or blocked. For example, suppose you add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches
         * the IP address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 1,000.</p> <p>You then add the
         * <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that meet the conditions in the rule. For a request to be
         * blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
         * <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code>. Further, requests that match these two conditions must be
         * received at a rate of more than 1,000 requests every five minutes. If both
         * conditions are met and the rate is exceeded, AWS WAF blocks the requests. If the
         * rate drops below 1,000 for a five-minute period, AWS WAF no longer blocks the
         * requests.</p> <p>As a second example, suppose you want to limit requests to a
         * particular page on your site. To do this, you could add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>A <code>ByteMatchSet</code> with
         * <code>FieldToMatch</code> of <code>URI</code> </p> </li> <li> <p>A
         * <code>PositionalConstraint</code> of <code>STARTS_WITH</code> </p> </li> <li>
         * <p>A <code>TargetString</code> of <code>login</code> </p> </li> </ul>
         * <p>Further, you specify a <code>RateLimit</code> of 1,000.</p> <p>By adding this
         * <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit requests to
         * your login page without affecting the rest of your site.</p> <p>To create and
         * configure a <code>RateBasedRule</code>, perform the following steps:</p> <ol>
         * <li> <p>Create and update the predicates that you want to include in the rule.
         * For more information, see <a>CreateByteMatchSet</a>, <a>CreateIPSet</a>, and
         * <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a>
         * to get the change token that you provide in the <code>ChangeToken</code>
         * parameter of a <code>CreateRule</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateRateBasedRule</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRateBasedRule</code> request to specify the
         * predicates that you want to include in the rule.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RateBasedRule</code>. For
         * more information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRateBasedRuleOutcome CreateRateBasedRule(const Model::CreateRateBasedRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRateBasedRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRateBasedRuleOutcomeCallable CreateRateBasedRuleCallable(const Model::CreateRateBasedRuleRequest& request) const;

        /**
         * An Async wrapper for CreateRateBasedRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRateBasedRuleAsync(const Model::CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <a>RegexMatchSet</a>. You then use <a>UpdateRegexMatchSet</a> to identify the
         * part of a web request that you want AWS WAF to inspect, such as the values of
         * the <code>User-Agent</code> header or the query string. For example, you can
         * create a <code>RegexMatchSet</code> that contains a <code>RegexMatchTuple</code>
         * that looks for any requests with <code>User-Agent</code> headers that match a
         * <code>RegexPatternSet</code> with pattern <code>B[a@]dB[o0]t</code>. You can
         * then configure AWS WAF to reject those requests.</p> <p>To create and configure
         * a <code>RegexMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateRegexMatchSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateRegexMatchSet</a> request to specify the part of the request that you
         * want AWS WAF to inspect (for example, the header or the URI) and the value,
         * using a <code>RegexPatternSet</code>, that you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegexMatchSetOutcome CreateRegexMatchSet(const Model::CreateRegexMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateRegexMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRegexMatchSetOutcomeCallable CreateRegexMatchSetCallable(const Model::CreateRegexMatchSetRequest& request) const;

        /**
         * An Async wrapper for CreateRegexMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRegexMatchSetAsync(const Model::CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>RegexPatternSet</code>. You then use <a>UpdateRegexPatternSet</a> to
         * specify the regular expression (regex) pattern that you want AWS WAF to search
         * for, such as <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject
         * those requests.</p> <p>To create and configure a <code>RegexPatternSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateRegexPatternSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateRegexPatternSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateRegexPatternSet</a> request to
         * specify the string that you want AWS WAF to watch for.</p> </li> </ol> <p>For
         * more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegexPatternSetOutcome CreateRegexPatternSet(const Model::CreateRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for CreateRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRegexPatternSetOutcomeCallable CreateRegexPatternSetCallable(const Model::CreateRegexPatternSetRequest& request) const;

        /**
         * An Async wrapper for CreateRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRegexPatternSetAsync(const Model::CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>Rule</code>, which contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to block. If you add more than one predicate to a
         * <code>Rule</code>, a request must match all of the specifications to be allowed
         * or blocked. For example, suppose that you add the following to a
         * <code>Rule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches the IP
         * address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>You then add the
         * <code>Rule</code> to a <code>WebACL</code> and specify that you want to blocks
         * requests that satisfy the <code>Rule</code>. For a request to be blocked, it
         * must come from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code>
         * header in the request must contain the value <code>BadBot</code>.</p> <p>To
         * create and configure a <code>Rule</code>, perform the following steps:</p> <ol>
         * <li> <p>Create and update the predicates that you want to include in the
         * <code>Rule</code>. For more information, see <a>CreateByteMatchSet</a>,
         * <a>CreateIPSet</a>, and <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRule</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateRule</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to specify the predicates that
         * you want to include in the <code>Rule</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>Rule</code>. For more
         * information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request) const;

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>RuleGroup</code>. A rule group is a collection of predefined rules that
         * you add to a web ACL. You use <a>UpdateRuleGroup</a> to add rules to the rule
         * group.</p> <p>Rule groups are subject to the following limits:</p> <ul> <li>
         * <p>Three rule groups per account. You can request an increase to this limit by
         * contacting customer support.</p> </li> <li> <p>One rule group per web ACL.</p>
         * </li> <li> <p>Ten rules per rule group.</p> </li> </ul> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleGroupOutcome CreateRuleGroup(const Model::CreateRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleGroupOutcomeCallable CreateRuleGroupCallable(const Model::CreateRuleGroupRequest& request) const;

        /**
         * An Async wrapper for CreateRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleGroupAsync(const Model::CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>SizeConstraintSet</code>. You then use <a>UpdateSizeConstraintSet</a> to
         * identify the part of a web request that you want AWS WAF to check for length,
         * such as the length of the <code>User-Agent</code> header or the length of the
         * query string. For example, you can create a <code>SizeConstraintSet</code> that
         * matches any requests that have a query string that is longer than 100 bytes. You
         * can then configure AWS WAF to reject those requests.</p> <p>To create and
         * configure a <code>SizeConstraintSet</code>, perform the following steps:</p>
         * <ol> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of a
         * <code>CreateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateSizeConstraintSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateSizeConstraintSet</a> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the value that you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSizeConstraintSetOutcome CreateSizeConstraintSet(const Model::CreateSizeConstraintSetRequest& request) const;

        /**
         * A Callable wrapper for CreateSizeConstraintSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSizeConstraintSetOutcomeCallable CreateSizeConstraintSetCallable(const Model::CreateSizeConstraintSetRequest& request) const;

        /**
         * An Async wrapper for CreateSizeConstraintSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSizeConstraintSetAsync(const Model::CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <a>SqlInjectionMatchSet</a>, which you use to allow, block, or count requests
         * that contain snippets of SQL code in a specified part of web requests. AWS WAF
         * searches for character sequences that are likely to be malicious strings.</p>
         * <p>To create and configure a <code>SqlInjectionMatchSet</code>, perform the
         * following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateSqlInjectionMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateSqlInjectionMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateSqlInjectionMatchSet</a>
         * request.</p> </li> <li> <p>Submit an <a>UpdateSqlInjectionMatchSet</a> request
         * to specify the parts of web requests in which you want to allow, block, or count
         * malicious SQL code.</p> </li> </ol> <p>For more information about how to use the
         * AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSqlInjectionMatchSetOutcome CreateSqlInjectionMatchSet(const Model::CreateSqlInjectionMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateSqlInjectionMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSqlInjectionMatchSetOutcomeCallable CreateSqlInjectionMatchSetCallable(const Model::CreateSqlInjectionMatchSetRequest& request) const;

        /**
         * An Async wrapper for CreateSqlInjectionMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSqlInjectionMatchSetAsync(const Model::CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>WebACL</code>, which contains the <code>Rules</code> that identify the
         * CloudFront web requests that you want to allow, block, or count. AWS WAF
         * evaluates <code>Rules</code> in order based on the value of
         * <code>Priority</code> for each <code>Rule</code>.</p> <p>You also specify a
         * default action, either <code>ALLOW</code> or <code>BLOCK</code>. If a web
         * request doesn't match any of the <code>Rules</code> in a <code>WebACL</code>,
         * AWS WAF responds to the request with the default action. </p> <p>To create and
         * configure a <code>WebACL</code>, perform the following steps:</p> <ol> <li>
         * <p>Create and update the <code>ByteMatchSet</code> objects and other predicates
         * that you want to include in <code>Rules</code>. For more information, see
         * <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>, <a>CreateIPSet</a>,
         * <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateWebACL</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateWebACL</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <a>UpdateWebACL</a> request to specify the <code>Rules</code>
         * that you want to include in the <code>WebACL</code>, to specify the default
         * action, and to associate the <code>WebACL</code> with a CloudFront
         * distribution.</p> </li> </ol> <p>For more information about how to use the AWS
         * WAF API, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebACLOutcome CreateWebACL(const Model::CreateWebACLRequest& request) const;

        /**
         * A Callable wrapper for CreateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebACLOutcomeCallable CreateWebACLCallable(const Model::CreateWebACLRequest& request) const;

        /**
         * An Async wrapper for CreateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebACLAsync(const Model::CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS CloudFormation WAFV2 template for the specified web ACL in the
         * specified Amazon S3 bucket. Then, in CloudFormation, you create a stack from the
         * template, to create the web ACL and its resources in AWS WAFV2. Use this to
         * migrate your AWS WAF Classic web ACL to the latest version of AWS WAF.</p>
         * <p>This is part of a larger migration procedure for web ACLs from AWS WAF
         * Classic to the latest version of AWS WAF. For the full procedure, including
         * caveats and manual steps to complete the migration and switch over to the new
         * web ACL, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-migrating-from-classic.html">Migrating
         * your AWS WAF Classic resources to AWS WAF</a> in the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateWebACLMigrationStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebACLMigrationStackOutcome CreateWebACLMigrationStack(const Model::CreateWebACLMigrationStackRequest& request) const;

        /**
         * A Callable wrapper for CreateWebACLMigrationStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebACLMigrationStackOutcomeCallable CreateWebACLMigrationStackCallable(const Model::CreateWebACLMigrationStackRequest& request) const;

        /**
         * An Async wrapper for CreateWebACLMigrationStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebACLMigrationStackAsync(const Model::CreateWebACLMigrationStackRequest& request, const CreateWebACLMigrationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates an
         * <a>XssMatchSet</a>, which you use to allow, block, or count requests that
         * contain cross-site scripting attacks in the specified part of web requests. AWS
         * WAF searches for character sequences that are likely to be malicious
         * strings.</p> <p>To create and configure an <code>XssMatchSet</code>, perform the
         * following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateXssMatchSet</a> request.</p>
         * </li> <li> <p>Submit an <a>UpdateXssMatchSet</a> request to specify the parts of
         * web requests in which you want to allow, block, or count cross-site scripting
         * attacks.</p> </li> </ol> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateXssMatchSetOutcome CreateXssMatchSet(const Model::CreateXssMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateXssMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateXssMatchSetOutcomeCallable CreateXssMatchSetCallable(const Model::CreateXssMatchSetRequest& request) const;

        /**
         * An Async wrapper for CreateXssMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateXssMatchSetAsync(const Model::CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>ByteMatchSet</a>. You can't delete a <code>ByteMatchSet</code> if it's still
         * used in any <code>Rules</code> or if it still includes any <a>ByteMatchTuple</a>
         * objects (any filters).</p> <p>If you just want to remove a
         * <code>ByteMatchSet</code> from a <code>Rule</code>, use <a>UpdateRule</a>.</p>
         * <p>To permanently delete a <code>ByteMatchSet</code>, perform the following
         * steps:</p> <ol> <li> <p>Update the <code>ByteMatchSet</code> to remove filters,
         * if any. For more information, see <a>UpdateByteMatchSet</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteByteMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteByteMatchSet</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteByteMatchSetOutcome DeleteByteMatchSet(const Model::DeleteByteMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteByteMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteByteMatchSetOutcomeCallable DeleteByteMatchSetCallable(const Model::DeleteByteMatchSetRequest& request) const;

        /**
         * An Async wrapper for DeleteByteMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteByteMatchSetAsync(const Model::DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>GeoMatchSet</a>. You can't delete a <code>GeoMatchSet</code> if it's still
         * used in any <code>Rules</code> or if it still includes any countries.</p> <p>If
         * you just want to remove a <code>GeoMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete a <code>GeoMatchSet</code> from
         * AWS WAF, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>GeoMatchSet</code> to remove any countries. For more information, see
         * <a>UpdateGeoMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteGeoMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteGeoMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGeoMatchSetOutcome DeleteGeoMatchSet(const Model::DeleteGeoMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteGeoMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGeoMatchSetOutcomeCallable DeleteGeoMatchSetCallable(const Model::DeleteGeoMatchSetRequest& request) const;

        /**
         * An Async wrapper for DeleteGeoMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGeoMatchSetAsync(const Model::DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes an
         * <a>IPSet</a>. You can't delete an <code>IPSet</code> if it's still used in any
         * <code>Rules</code> or if it still includes any IP addresses.</p> <p>If you just
         * want to remove an <code>IPSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete an <code>IPSet</code> from AWS
         * WAF, perform the following steps:</p> <ol> <li> <p>Update the <code>IPSet</code>
         * to remove IP address ranges, if any. For more information, see
         * <a>UpdateIPSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteIPSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteIPSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIPSetOutcome DeleteIPSet(const Model::DeleteIPSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIPSetOutcomeCallable DeleteIPSetCallable(const Model::DeleteIPSetRequest& request) const;

        /**
         * An Async wrapper for DeleteIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIPSetAsync(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes the
         * <a>LoggingConfiguration</a> from the specified web ACL.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggingConfigurationOutcome DeleteLoggingConfiguration(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoggingConfigurationOutcomeCallable DeleteLoggingConfigurationCallable(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoggingConfigurationAsync(const Model::DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes an
         * IAM policy from the specified RuleGroup.</p> <p>The user making the request must
         * be the owner of the RuleGroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeletePermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionPolicyOutcome DeletePermissionPolicy(const Model::DeletePermissionPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePermissionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionPolicyOutcomeCallable DeletePermissionPolicyCallable(const Model::DeletePermissionPolicyRequest& request) const;

        /**
         * An Async wrapper for DeletePermissionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionPolicyAsync(const Model::DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>RateBasedRule</a>. You can't delete a rule if it's still used in any
         * <code>WebACL</code> objects or if it still includes any predicates, such as
         * <code>ByteMatchSet</code> objects.</p> <p>If you just want to remove a rule from
         * a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p> <p>To permanently delete a
         * <code>RateBasedRule</code> from AWS WAF, perform the following steps:</p> <ol>
         * <li> <p>Update the <code>RateBasedRule</code> to remove predicates, if any. For
         * more information, see <a>UpdateRateBasedRule</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteRateBasedRule</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteRateBasedRule</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRateBasedRuleOutcome DeleteRateBasedRule(const Model::DeleteRateBasedRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRateBasedRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRateBasedRuleOutcomeCallable DeleteRateBasedRuleCallable(const Model::DeleteRateBasedRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteRateBasedRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRateBasedRuleAsync(const Model::DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>RegexMatchSet</a>. You can't delete a <code>RegexMatchSet</code> if it's
         * still used in any <code>Rules</code> or if it still includes any
         * <code>RegexMatchTuples</code> objects (any filters).</p> <p>If you just want to
         * remove a <code>RegexMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete a <code>RegexMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Update the
         * <code>RegexMatchSet</code> to remove filters, if any. For more information, see
         * <a>UpdateRegexMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteRegexMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRegexMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegexMatchSetOutcome DeleteRegexMatchSet(const Model::DeleteRegexMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegexMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegexMatchSetOutcomeCallable DeleteRegexMatchSetCallable(const Model::DeleteRegexMatchSetRequest& request) const;

        /**
         * An Async wrapper for DeleteRegexMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegexMatchSetAsync(const Model::DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>RegexPatternSet</a>. You can't delete a <code>RegexPatternSet</code> if it's
         * still used in any <code>RegexMatchSet</code> or if the
         * <code>RegexPatternSet</code> is not empty. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegexPatternSetOutcome DeleteRegexPatternSet(const Model::DeleteRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegexPatternSetOutcomeCallable DeleteRegexPatternSetCallable(const Model::DeleteRegexPatternSetRequest& request) const;

        /**
         * An Async wrapper for DeleteRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegexPatternSetAsync(const Model::DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>Rule</a>. You can't delete a <code>Rule</code> if it's still used in any
         * <code>WebACL</code> objects or if it still includes any predicates, such as
         * <code>ByteMatchSet</code> objects.</p> <p>If you just want to remove a
         * <code>Rule</code> from a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p> <p>To
         * permanently delete a <code>Rule</code> from AWS WAF, perform the following
         * steps:</p> <ol> <li> <p>Update the <code>Rule</code> to remove predicates, if
         * any. For more information, see <a>UpdateRule</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteRule</code> request.</p>
         * </li> <li> <p>Submit a <code>DeleteRule</code> request.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>RuleGroup</a>. You can't delete a <code>RuleGroup</code> if it's still used
         * in any <code>WebACL</code> objects or if it still includes any rules.</p> <p>If
         * you just want to remove a <code>RuleGroup</code> from a <code>WebACL</code>, use
         * <a>UpdateWebACL</a>.</p> <p>To permanently delete a <code>RuleGroup</code> from
         * AWS WAF, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>RuleGroup</code> to remove rules, if any. For more information, see
         * <a>UpdateRuleGroup</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteRuleGroup</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRuleGroup</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupOutcome DeleteRuleGroup(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleGroupOutcomeCallable DeleteRuleGroupCallable(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleGroupAsync(const Model::DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>SizeConstraintSet</a>. You can't delete a <code>SizeConstraintSet</code> if
         * it's still used in any <code>Rules</code> or if it still includes any
         * <a>SizeConstraint</a> objects (any filters).</p> <p>If you just want to remove a
         * <code>SizeConstraintSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SizeConstraintSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Update the <code>SizeConstraintSet</code> to remove filters, if any. For more
         * information, see <a>UpdateSizeConstraintSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSizeConstraintSetOutcome DeleteSizeConstraintSet(const Model::DeleteSizeConstraintSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteSizeConstraintSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSizeConstraintSetOutcomeCallable DeleteSizeConstraintSetCallable(const Model::DeleteSizeConstraintSetRequest& request) const;

        /**
         * An Async wrapper for DeleteSizeConstraintSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSizeConstraintSetAsync(const Model::DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>SqlInjectionMatchSet</a>. You can't delete a
         * <code>SqlInjectionMatchSet</code> if it's still used in any <code>Rules</code>
         * or if it still contains any <a>SqlInjectionMatchTuple</a> objects.</p> <p>If you
         * just want to remove a <code>SqlInjectionMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SqlInjectionMatchSet</code> from AWS WAF, perform the following steps:</p>
         * <ol> <li> <p>Update the <code>SqlInjectionMatchSet</code> to remove filters, if
         * any. For more information, see <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSqlInjectionMatchSetOutcome DeleteSqlInjectionMatchSet(const Model::DeleteSqlInjectionMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteSqlInjectionMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSqlInjectionMatchSetOutcomeCallable DeleteSqlInjectionMatchSetCallable(const Model::DeleteSqlInjectionMatchSetRequest& request) const;

        /**
         * An Async wrapper for DeleteSqlInjectionMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSqlInjectionMatchSetAsync(const Model::DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>WebACL</a>. You can't delete a <code>WebACL</code> if it still contains any
         * <code>Rules</code>.</p> <p>To delete a <code>WebACL</code>, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>WebACL</code> to remove
         * <code>Rules</code>, if any. For more information, see <a>UpdateWebACL</a>.</p>
         * </li> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of a <code>DeleteWebACL</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteWebACL</code> request.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebACLOutcome DeleteWebACL(const Model::DeleteWebACLRequest& request) const;

        /**
         * A Callable wrapper for DeleteWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWebACLOutcomeCallable DeleteWebACLCallable(const Model::DeleteWebACLRequest& request) const;

        /**
         * An Async wrapper for DeleteWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWebACLAsync(const Model::DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes an
         * <a>XssMatchSet</a>. You can't delete an <code>XssMatchSet</code> if it's still
         * used in any <code>Rules</code> or if it still contains any <a>XssMatchTuple</a>
         * objects.</p> <p>If you just want to remove an <code>XssMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete an
         * <code>XssMatchSet</code> from AWS WAF, perform the following steps:</p> <ol>
         * <li> <p>Update the <code>XssMatchSet</code> to remove filters, if any. For more
         * information, see <a>UpdateXssMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteXssMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteXssMatchSet</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteXssMatchSetOutcome DeleteXssMatchSet(const Model::DeleteXssMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteXssMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteXssMatchSetOutcomeCallable DeleteXssMatchSetCallable(const Model::DeleteXssMatchSetRequest& request) const;

        /**
         * An Async wrapper for DeleteXssMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteXssMatchSetAsync(const Model::DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic Regional</b> documentation. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Removes a web ACL from
         * the specified resource, either an application load balancer or Amazon API
         * Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DisassociateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWebACLOutcome DisassociateWebACL(const Model::DisassociateWebACLRequest& request) const;

        /**
         * A Callable wrapper for DisassociateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWebACLOutcomeCallable DisassociateWebACLCallable(const Model::DisassociateWebACLRequest& request) const;

        /**
         * An Async wrapper for DisassociateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWebACLAsync(const Model::DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>ByteMatchSet</a> specified by <code>ByteMatchSetId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetByteMatchSetOutcome GetByteMatchSet(const Model::GetByteMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetByteMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetByteMatchSetOutcomeCallable GetByteMatchSetCallable(const Model::GetByteMatchSetRequest& request) const;

        /**
         * An Async wrapper for GetByteMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetByteMatchSetAsync(const Model::GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>When you want to create,
         * update, or delete AWS WAF objects, get a change token and include the change
         * token in the create, update, or delete request. Change tokens ensure that your
         * application doesn't submit conflicting requests to AWS WAF.</p> <p>Each create,
         * update, or delete request must use a unique change token. If your application
         * submits a <code>GetChangeToken</code> request and then submits a second
         * <code>GetChangeToken</code> request before submitting a create, update, or
         * delete request, the second <code>GetChangeToken</code> request returns the same
         * value as the first <code>GetChangeToken</code> request.</p> <p>When you use a
         * change token in a create, update, or delete request, the status of the change
         * token changes to <code>PENDING</code>, which indicates that AWS WAF is
         * propagating the change to all AWS WAF servers. Use
         * <code>GetChangeTokenStatus</code> to determine the status of your change
         * token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetChangeToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeTokenOutcome GetChangeToken(const Model::GetChangeTokenRequest& request) const;

        /**
         * A Callable wrapper for GetChangeToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChangeTokenOutcomeCallable GetChangeTokenCallable(const Model::GetChangeTokenRequest& request) const;

        /**
         * An Async wrapper for GetChangeToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChangeTokenAsync(const Model::GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the status of a
         * <code>ChangeToken</code> that you got by calling <a>GetChangeToken</a>.
         * <code>ChangeTokenStatus</code> is one of the following values:</p> <ul> <li> <p>
         * <code>PROVISIONED</code>: You requested the change token by calling
         * <code>GetChangeToken</code>, but you haven't used it yet in a call to create,
         * update, or delete an AWS WAF object.</p> </li> <li> <p> <code>PENDING</code>:
         * AWS WAF is propagating the create, update, or delete request to all AWS WAF
         * servers.</p> </li> <li> <p> <code>INSYNC</code>: Propagation is complete.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetChangeTokenStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeTokenStatusOutcome GetChangeTokenStatus(const Model::GetChangeTokenStatusRequest& request) const;

        /**
         * A Callable wrapper for GetChangeTokenStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChangeTokenStatusOutcomeCallable GetChangeTokenStatusCallable(const Model::GetChangeTokenStatusRequest& request) const;

        /**
         * An Async wrapper for GetChangeTokenStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChangeTokenStatusAsync(const Model::GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>GeoMatchSet</a> that is specified by
         * <code>GeoMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeoMatchSetOutcome GetGeoMatchSet(const Model::GetGeoMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetGeoMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGeoMatchSetOutcomeCallable GetGeoMatchSetCallable(const Model::GetGeoMatchSetRequest& request) const;

        /**
         * An Async wrapper for GetGeoMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGeoMatchSetAsync(const Model::GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the <a>IPSet</a>
         * that is specified by <code>IPSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIPSetOutcome GetIPSet(const Model::GetIPSetRequest& request) const;

        /**
         * A Callable wrapper for GetIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIPSetOutcomeCallable GetIPSetCallable(const Model::GetIPSetRequest& request) const;

        /**
         * An Async wrapper for GetIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIPSetAsync(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>LoggingConfiguration</a> for the specified web ACL.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggingConfigurationOutcome GetLoggingConfiguration(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggingConfigurationOutcomeCallable GetLoggingConfigurationCallable(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggingConfigurationAsync(const Model::GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the IAM policy
         * attached to the RuleGroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionPolicyOutcome GetPermissionPolicy(const Model::GetPermissionPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPermissionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPermissionPolicyOutcomeCallable GetPermissionPolicyCallable(const Model::GetPermissionPolicyRequest& request) const;

        /**
         * An Async wrapper for GetPermissionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPermissionPolicyAsync(const Model::GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>RateBasedRule</a> that is specified by the <code>RuleId</code> that you
         * included in the <code>GetRateBasedRule</code> request.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRateBasedRuleOutcome GetRateBasedRule(const Model::GetRateBasedRuleRequest& request) const;

        /**
         * A Callable wrapper for GetRateBasedRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRateBasedRuleOutcomeCallable GetRateBasedRuleCallable(const Model::GetRateBasedRuleRequest& request) const;

        /**
         * An Async wrapper for GetRateBasedRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRateBasedRuleAsync(const Model::GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of IP
         * addresses currently being blocked by the <a>RateBasedRule</a> that is specified
         * by the <code>RuleId</code>. The maximum number of managed keys that will be
         * blocked is 10,000. If more than 10,000 addresses exceed the rate limit, the
         * 10,000 addresses with the highest rates will be blocked.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRateBasedRuleManagedKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRateBasedRuleManagedKeysOutcome GetRateBasedRuleManagedKeys(const Model::GetRateBasedRuleManagedKeysRequest& request) const;

        /**
         * A Callable wrapper for GetRateBasedRuleManagedKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRateBasedRuleManagedKeysOutcomeCallable GetRateBasedRuleManagedKeysCallable(const Model::GetRateBasedRuleManagedKeysRequest& request) const;

        /**
         * An Async wrapper for GetRateBasedRuleManagedKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRateBasedRuleManagedKeysAsync(const Model::GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>RegexMatchSet</a> specified by <code>RegexMatchSetId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegexMatchSetOutcome GetRegexMatchSet(const Model::GetRegexMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetRegexMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegexMatchSetOutcomeCallable GetRegexMatchSetCallable(const Model::GetRegexMatchSetRequest& request) const;

        /**
         * An Async wrapper for GetRegexMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegexMatchSetAsync(const Model::GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>RegexPatternSet</a> specified by
         * <code>RegexPatternSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegexPatternSetOutcome GetRegexPatternSet(const Model::GetRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for GetRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegexPatternSetOutcomeCallable GetRegexPatternSetCallable(const Model::GetRegexPatternSetRequest& request) const;

        /**
         * An Async wrapper for GetRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegexPatternSetAsync(const Model::GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the <a>Rule</a>
         * that is specified by the <code>RuleId</code> that you included in the
         * <code>GetRule</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleOutcome GetRule(const Model::GetRuleRequest& request) const;

        /**
         * A Callable wrapper for GetRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRuleOutcomeCallable GetRuleCallable(const Model::GetRuleRequest& request) const;

        /**
         * An Async wrapper for GetRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRuleAsync(const Model::GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>RuleGroup</a> that is specified by the <code>RuleGroupId</code> that you
         * included in the <code>GetRuleGroup</code> request.</p> <p>To view the rules in a
         * rule group, use <a>ListActivatedRulesInRuleGroup</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleGroupOutcome GetRuleGroup(const Model::GetRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for GetRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRuleGroupOutcomeCallable GetRuleGroupCallable(const Model::GetRuleGroupRequest& request) const;

        /**
         * An Async wrapper for GetRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRuleGroupAsync(const Model::GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Gets detailed information
         * about a specified number of requests--a sample--that AWS WAF randomly selects
         * from among the first 5,000 requests that your AWS resource received during a
         * time range that you choose. You can specify a sample size of up to 500 requests,
         * and you can specify any time range in the previous three hours.</p> <p>
         * <code>GetSampledRequests</code> returns a time range, which is usually the time
         * range that you specified. However, if your resource (such as a CloudFront
         * distribution) received 5,000 requests before the specified time range elapsed,
         * <code>GetSampledRequests</code> returns an updated time range. This new time
         * range indicates the actual period during which AWS WAF selected the requests in
         * the sample.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSampledRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSampledRequestsOutcome GetSampledRequests(const Model::GetSampledRequestsRequest& request) const;

        /**
         * A Callable wrapper for GetSampledRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSampledRequestsOutcomeCallable GetSampledRequestsCallable(const Model::GetSampledRequestsRequest& request) const;

        /**
         * An Async wrapper for GetSampledRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSampledRequestsAsync(const Model::GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>SizeConstraintSet</a> specified by
         * <code>SizeConstraintSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSizeConstraintSetOutcome GetSizeConstraintSet(const Model::GetSizeConstraintSetRequest& request) const;

        /**
         * A Callable wrapper for GetSizeConstraintSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSizeConstraintSetOutcomeCallable GetSizeConstraintSetCallable(const Model::GetSizeConstraintSetRequest& request) const;

        /**
         * An Async wrapper for GetSizeConstraintSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSizeConstraintSetAsync(const Model::GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>SqlInjectionMatchSet</a> that is specified by
         * <code>SqlInjectionMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSqlInjectionMatchSetOutcome GetSqlInjectionMatchSet(const Model::GetSqlInjectionMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetSqlInjectionMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSqlInjectionMatchSetOutcomeCallable GetSqlInjectionMatchSetCallable(const Model::GetSqlInjectionMatchSetRequest& request) const;

        /**
         * An Async wrapper for GetSqlInjectionMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSqlInjectionMatchSetAsync(const Model::GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the <a>WebACL</a>
         * that is specified by <code>WebACLId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebACLOutcome GetWebACL(const Model::GetWebACLRequest& request) const;

        /**
         * A Callable wrapper for GetWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebACLOutcomeCallable GetWebACLCallable(const Model::GetWebACLRequest& request) const;

        /**
         * An Async wrapper for GetWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWebACLAsync(const Model::GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic Regional</b> documentation. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the web ACL for
         * the specified resource, either an application load balancer or Amazon API
         * Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetWebACLForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebACLForResourceOutcome GetWebACLForResource(const Model::GetWebACLForResourceRequest& request) const;

        /**
         * A Callable wrapper for GetWebACLForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebACLForResourceOutcomeCallable GetWebACLForResourceCallable(const Model::GetWebACLForResourceRequest& request) const;

        /**
         * An Async wrapper for GetWebACLForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWebACLForResourceAsync(const Model::GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>XssMatchSet</a> that is specified by
         * <code>XssMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetXssMatchSetOutcome GetXssMatchSet(const Model::GetXssMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetXssMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetXssMatchSetOutcomeCallable GetXssMatchSetCallable(const Model::GetXssMatchSetRequest& request) const;

        /**
         * An Async wrapper for GetXssMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetXssMatchSetAsync(const Model::GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>ActivatedRule</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListActivatedRulesInRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActivatedRulesInRuleGroupOutcome ListActivatedRulesInRuleGroup(const Model::ListActivatedRulesInRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for ListActivatedRulesInRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActivatedRulesInRuleGroupOutcomeCallable ListActivatedRulesInRuleGroupCallable(const Model::ListActivatedRulesInRuleGroupRequest& request) const;

        /**
         * An Async wrapper for ListActivatedRulesInRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActivatedRulesInRuleGroupAsync(const Model::ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>ByteMatchSetSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListByteMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListByteMatchSetsOutcome ListByteMatchSets(const Model::ListByteMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListByteMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListByteMatchSetsOutcomeCallable ListByteMatchSetsCallable(const Model::ListByteMatchSetsRequest& request) const;

        /**
         * An Async wrapper for ListByteMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListByteMatchSetsAsync(const Model::ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>GeoMatchSetSummary</a> objects in the response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListGeoMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeoMatchSetsOutcome ListGeoMatchSets(const Model::ListGeoMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListGeoMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGeoMatchSetsOutcomeCallable ListGeoMatchSetsCallable(const Model::ListGeoMatchSetsRequest& request) const;

        /**
         * An Async wrapper for ListGeoMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGeoMatchSetsAsync(const Model::ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>IPSetSummary</a> objects in the response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListIPSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIPSetsOutcome ListIPSets(const Model::ListIPSetsRequest& request) const;

        /**
         * A Callable wrapper for ListIPSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIPSetsOutcomeCallable ListIPSetsCallable(const Model::ListIPSetsRequest& request) const;

        /**
         * An Async wrapper for ListIPSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIPSetsAsync(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>LoggingConfiguration</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListLoggingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggingConfigurationsOutcome ListLoggingConfigurations(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListLoggingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLoggingConfigurationsOutcomeCallable ListLoggingConfigurationsCallable(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListLoggingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLoggingConfigurationsAsync(const Model::ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRateBasedRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRateBasedRulesOutcome ListRateBasedRules(const Model::ListRateBasedRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRateBasedRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRateBasedRulesOutcomeCallable ListRateBasedRulesCallable(const Model::ListRateBasedRulesRequest& request) const;

        /**
         * An Async wrapper for ListRateBasedRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRateBasedRulesAsync(const Model::ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RegexMatchSetSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRegexMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegexMatchSetsOutcome ListRegexMatchSets(const Model::ListRegexMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListRegexMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegexMatchSetsOutcomeCallable ListRegexMatchSetsCallable(const Model::ListRegexMatchSetsRequest& request) const;

        /**
         * An Async wrapper for ListRegexMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegexMatchSetsAsync(const Model::ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RegexPatternSetSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRegexPatternSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegexPatternSetsOutcome ListRegexPatternSets(const Model::ListRegexPatternSetsRequest& request) const;

        /**
         * A Callable wrapper for ListRegexPatternSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegexPatternSetsOutcomeCallable ListRegexPatternSetsCallable(const Model::ListRegexPatternSetsRequest& request) const;

        /**
         * An Async wrapper for ListRegexPatternSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegexPatternSetsAsync(const Model::ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic Regional</b> documentation. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * resources associated with the specified web ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListResourcesForWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesForWebACLOutcome ListResourcesForWebACL(const Model::ListResourcesForWebACLRequest& request) const;

        /**
         * A Callable wrapper for ListResourcesForWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesForWebACLOutcomeCallable ListResourcesForWebACLCallable(const Model::ListResourcesForWebACLRequest& request) const;

        /**
         * An Async wrapper for ListResourcesForWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesForWebACLAsync(const Model::ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RuleGroup</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleGroupsOutcome ListRuleGroups(const Model::ListRuleGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleGroupsOutcomeCallable ListRuleGroupsCallable(const Model::ListRuleGroupsRequest& request) const;

        /**
         * An Async wrapper for ListRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleGroupsAsync(const Model::ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesOutcomeCallable ListRulesCallable(const Model::ListRulesRequest& request) const;

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesAsync(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>SizeConstraintSetSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSizeConstraintSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSizeConstraintSetsOutcome ListSizeConstraintSets(const Model::ListSizeConstraintSetsRequest& request) const;

        /**
         * A Callable wrapper for ListSizeConstraintSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSizeConstraintSetsOutcomeCallable ListSizeConstraintSetsCallable(const Model::ListSizeConstraintSetsRequest& request) const;

        /**
         * An Async wrapper for ListSizeConstraintSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSizeConstraintSetsAsync(const Model::ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>SqlInjectionMatchSet</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSqlInjectionMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSqlInjectionMatchSetsOutcome ListSqlInjectionMatchSets(const Model::ListSqlInjectionMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListSqlInjectionMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSqlInjectionMatchSetsOutcomeCallable ListSqlInjectionMatchSetsCallable(const Model::ListSqlInjectionMatchSetsRequest& request) const;

        /**
         * An Async wrapper for ListSqlInjectionMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSqlInjectionMatchSetsAsync(const Model::ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RuleGroup</a> objects that you are subscribed to.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSubscribedRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscribedRuleGroupsOutcome ListSubscribedRuleGroups(const Model::ListSubscribedRuleGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscribedRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscribedRuleGroupsOutcomeCallable ListSubscribedRuleGroupsCallable(const Model::ListSubscribedRuleGroupsRequest& request) const;

        /**
         * An Async wrapper for ListSubscribedRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscribedRuleGroupsAsync(const Model::ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Retrieves the tags
         * associated with the specified AWS resource. Tags are key:value pairs that you
         * can use to categorize and manage your resources, for purposes like billing. For
         * example, you might set the tag key to "customer" and the value to the customer
         * name or ID. You can specify one or more tags to add to each AWS resource, up to
         * 50 tags for a resource.</p> <p>Tagging is only available through the API, SDKs,
         * and CLI. You can't manage or view tags through the AWS WAF Classic console. You
         * can tag the AWS resources that you manage through AWS WAF Classic: web ACLs,
         * rule groups, and rules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>WebACLSummary</a> objects in the response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListWebACLs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebACLsOutcome ListWebACLs(const Model::ListWebACLsRequest& request) const;

        /**
         * A Callable wrapper for ListWebACLs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWebACLsOutcomeCallable ListWebACLsCallable(const Model::ListWebACLsRequest& request) const;

        /**
         * An Async wrapper for ListWebACLs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWebACLsAsync(const Model::ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>XssMatchSet</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListXssMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListXssMatchSetsOutcome ListXssMatchSets(const Model::ListXssMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListXssMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListXssMatchSetsOutcomeCallable ListXssMatchSetsCallable(const Model::ListXssMatchSetsRequest& request) const;

        /**
         * An Async wrapper for ListXssMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListXssMatchSetsAsync(const Model::ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Associates a
         * <a>LoggingConfiguration</a> with a specified web ACL.</p> <p>You can access
         * information about all traffic that AWS WAF inspects using the following
         * steps:</p> <ol> <li> <p>Create an Amazon Kinesis Data Firehose. </p> <p>Create
         * the data firehose with a PUT source and in the region that you are operating.
         * However, if you are capturing logs for Amazon CloudFront, always create the
         * firehose in US East (N. Virginia). </p>  <p>Do not create the data
         * firehose using a <code>Kinesis stream</code> as your source.</p>  </li>
         * <li> <p>Associate that firehose to your web ACL using a
         * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
         * successfully enable logging using a <code>PutLoggingConfiguration</code>
         * request, AWS WAF will create a service linked role with the necessary
         * permissions to write logs to the Amazon Kinesis Data Firehose. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * Web ACL Traffic Information</a> in the <i>AWS WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/PutLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingConfigurationOutcome PutLoggingConfiguration(const Model::PutLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLoggingConfigurationOutcomeCallable PutLoggingConfigurationCallable(const Model::PutLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLoggingConfigurationAsync(const Model::PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Attaches an IAM policy to
         * the specified resource. The only supported use for this action is to share a
         * RuleGroup across accounts.</p> <p>The <code>PutPermissionPolicy</code> is
         * subject to the following restrictions:</p> <ul> <li> <p>You can attach only one
         * policy with each <code>PutPermissionPolicy</code> request.</p> </li> <li> <p>The
         * policy must include an <code>Effect</code>, <code>Action</code> and
         * <code>Principal</code>. </p> </li> <li> <p> <code>Effect</code> must specify
         * <code>Allow</code>.</p> </li> <li> <p>The <code>Action</code> in the policy must
         * be <code>waf:UpdateWebACL</code>, <code>waf-regional:UpdateWebACL</code>,
         * <code>waf:GetRuleGroup</code> and <code>waf-regional:GetRuleGroup</code> . Any
         * extra or wildcard actions in the policy will be rejected.</p> </li> <li> <p>The
         * policy cannot include a <code>Resource</code> parameter.</p> </li> <li> <p>The
         * ARN in the request must be a valid WAF RuleGroup ARN and the RuleGroup must
         * exist in the same region.</p> </li> <li> <p>The user making the request must be
         * the owner of the RuleGroup.</p> </li> <li> <p>Your policy must be composed using
         * IAM Policy version 2012-10-17.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">IAM
         * Policies</a>. </p> <p>An example of a valid policy parameter is shown in the
         * Examples section below.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/PutPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionPolicyOutcome PutPermissionPolicy(const Model::PutPermissionPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutPermissionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPermissionPolicyOutcomeCallable PutPermissionPolicyCallable(const Model::PutPermissionPolicyRequest& request) const;

        /**
         * An Async wrapper for PutPermissionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPermissionPolicyAsync(const Model::PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Associates tags with the
         * specified AWS resource. Tags are key:value pairs that you can use to categorize
         * and manage your resources, for purposes like billing. For example, you might set
         * the tag key to "customer" and the value to the customer name or ID. You can
         * specify one or more tags to add to each AWS resource, up to 50 tags for a
         * resource.</p> <p>Tagging is only available through the API, SDKs, and CLI. You
         * can't manage or view tags through the AWS WAF Classic console. You can use this
         * action to tag the AWS resources that you manage through AWS WAF Classic: web
         * ACLs, rule groups, and rules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p/><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>ByteMatchTuple</a> objects (filters) in a <a>ByteMatchSet</a>. For each
         * <code>ByteMatchTuple</code> object, you specify the following values: </p> <ul>
         * <li> <p>Whether to insert or delete the object from the array. If you want to
         * change a <code>ByteMatchSetUpdate</code> object, you delete the existing object
         * and add a new one.</p> </li> <li> <p>The part of a web request that you want AWS
         * WAF to inspect, such as a query string or the value of the
         * <code>User-Agent</code> header. </p> </li> <li> <p>The bytes (typically a string
         * that corresponds with ASCII characters) that you want AWS WAF to look for. For
         * more information, including how you specify the values for the AWS WAF API and
         * the AWS CLI or SDKs, see <code>TargetString</code> in the <a>ByteMatchTuple</a>
         * data type. </p> </li> <li> <p>Where to look, such as at the beginning or the end
         * of a query string.</p> </li> <li> <p>Whether to perform any conversions on the
         * request, such as converting it to lowercase, before inspecting it for the
         * specified string.</p> </li> </ul> <p>For example, you can add a
         * <code>ByteMatchSetUpdate</code> object that matches web requests in which
         * <code>User-Agent</code> headers contain the string <code>BadBot</code>. You can
         * then configure AWS WAF to block those requests.</p> <p>To create and configure a
         * <code>ByteMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Create
         * a <code>ByteMatchSet.</code> For more information, see
         * <a>CreateByteMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <code>UpdateByteMatchSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateByteMatchSet</code> request to specify the part of the request that
         * you want AWS WAF to inspect (for example, the header or the URI) and the value
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateByteMatchSetOutcome UpdateByteMatchSet(const Model::UpdateByteMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateByteMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateByteMatchSetOutcomeCallable UpdateByteMatchSetCallable(const Model::UpdateByteMatchSetRequest& request) const;

        /**
         * An Async wrapper for UpdateByteMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateByteMatchSetAsync(const Model::UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>GeoMatchConstraint</a> objects in an <code>GeoMatchSet</code>. For each
         * <code>GeoMatchConstraint</code> object, you specify the following values: </p>
         * <ul> <li> <p>Whether to insert or delete the object from the array. If you want
         * to change an <code>GeoMatchConstraint</code> object, you delete the existing
         * object and add a new one.</p> </li> <li> <p>The <code>Type</code>. The only
         * valid value for <code>Type</code> is <code>Country</code>.</p> </li> <li> <p>The
         * <code>Value</code>, which is a two character code for the country to add to the
         * <code>GeoMatchConstraint</code> object. Valid codes are listed in
         * <a>GeoMatchConstraint$Value</a>.</p> </li> </ul> <p>To create and configure an
         * <code>GeoMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateGeoMatchSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <a>UpdateGeoMatchSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateGeoMatchSet</code> request to specify the country that you want AWS
         * WAF to watch for.</p> </li> </ol> <p>When you update an
         * <code>GeoMatchSet</code>, you specify the country that you want to add and/or
         * the country that you want to delete. If you want to change a country, you delete
         * the existing country and add the new one.</p> <p>For more information about how
         * to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGeoMatchSetOutcome UpdateGeoMatchSet(const Model::UpdateGeoMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateGeoMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGeoMatchSetOutcomeCallable UpdateGeoMatchSetCallable(const Model::UpdateGeoMatchSetRequest& request) const;

        /**
         * An Async wrapper for UpdateGeoMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGeoMatchSetAsync(const Model::UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>IPSetDescriptor</a> objects in an <code>IPSet</code>. For each
         * <code>IPSetDescriptor</code> object, you specify the following values: </p> <ul>
         * <li> <p>Whether to insert or delete the object from the array. If you want to
         * change an <code>IPSetDescriptor</code> object, you delete the existing object
         * and add a new one.</p> </li> <li> <p>The IP address version, <code>IPv4</code>
         * or <code>IPv6</code>. </p> </li> <li> <p>The IP address in CIDR notation, for
         * example, <code>192.0.2.0/24</code> (for the range of IP addresses from
         * <code>192.0.2.0</code> to <code>192.0.2.255</code>) or
         * <code>192.0.2.44/32</code> (for the individual IP address
         * <code>192.0.2.44</code>). </p> </li> </ul> <p>AWS WAF supports IPv4 address
         * ranges: /8 and any range between /16 through /32. AWS WAF supports IPv6 address
         * ranges: /24, /32, /48, /56, /64, and /128. For more information about CIDR
         * notation, see the Wikipedia entry <a
         * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
         * Inter-Domain Routing</a>.</p> <p>IPv6 addresses can be represented using any of
         * the following formats:</p> <ul> <li>
         * <p>1111:0000:0000:0000:0000:0000:0000:0111/128</p> </li> <li>
         * <p>1111:0:0:0:0:0:0:0111/128</p> </li> <li> <p>1111::0111/128</p> </li> <li>
         * <p>1111::111/128</p> </li> </ul> <p>You use an <code>IPSet</code> to specify
         * which web requests you want to allow or block based on the IP addresses that the
         * requests originated from. For example, if you're receiving a lot of requests
         * from one or a small number of IP addresses and you want to block the requests,
         * you can create an <code>IPSet</code> that specifies those IP addresses, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure an
         * <code>IPSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateIPSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateIPSet</code> request to specify the IP addresses that you want AWS
         * WAF to watch for.</p> </li> </ol> <p>When you update an <code>IPSet</code>, you
         * specify the IP addresses that you want to add and/or the IP addresses that you
         * want to delete. If you want to change an IP address, you delete the existing IP
         * address and add the new one.</p> <p>You can insert a maximum of 1000 addresses
         * in a single request.</p> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIPSetOutcomeCallable UpdateIPSetCallable(const Model::UpdateIPSetRequest& request) const;

        /**
         * An Async wrapper for UpdateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIPSetAsync(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>Predicate</a> objects in a rule and updates the <code>RateLimit</code> in the
         * rule. </p> <p>Each <code>Predicate</code> object identifies a predicate, such as
         * a <a>ByteMatchSet</a> or an <a>IPSet</a>, that specifies the web requests that
         * you want to block or count. The <code>RateLimit</code> specifies the number of
         * requests every five minutes that triggers the rule.</p> <p>If you add more than
         * one predicate to a <code>RateBasedRule</code>, a request must match all the
         * predicates and exceed the <code>RateLimit</code> to be counted or blocked. For
         * example, suppose you add the following to a <code>RateBasedRule</code>:</p> <ul>
         * <li> <p>An <code>IPSet</code> that matches the IP address
         * <code>192.0.2.44/32</code> </p> </li> <li> <p>A <code>ByteMatchSet</code> that
         * matches <code>BadBot</code> in the <code>User-Agent</code> header</p> </li>
         * </ul> <p>Further, you specify a <code>RateLimit</code> of 1,000.</p> <p>You then
         * add the <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you
         * want to block requests that satisfy the rule. For a request to be blocked, it
         * must come from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code>
         * header in the request must contain the value <code>BadBot</code>. Further,
         * requests that match these two conditions much be received at a rate of more than
         * 1,000 every five minutes. If the rate drops below this limit, AWS WAF no longer
         * blocks the requests.</p> <p>As a second example, suppose you want to limit
         * requests to a particular page on your site. To do this, you could add the
         * following to a <code>RateBasedRule</code>:</p> <ul> <li> <p>A
         * <code>ByteMatchSet</code> with <code>FieldToMatch</code> of <code>URI</code>
         * </p> </li> <li> <p>A <code>PositionalConstraint</code> of
         * <code>STARTS_WITH</code> </p> </li> <li> <p>A <code>TargetString</code> of
         * <code>login</code> </p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 1,000.</p> <p>By adding this
         * <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit requests to
         * your login page without affecting the rest of your site.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRateBasedRuleOutcome UpdateRateBasedRule(const Model::UpdateRateBasedRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRateBasedRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRateBasedRuleOutcomeCallable UpdateRateBasedRuleCallable(const Model::UpdateRateBasedRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateRateBasedRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRateBasedRuleAsync(const Model::UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>RegexMatchTuple</a> objects (filters) in a <a>RegexMatchSet</a>. For each
         * <code>RegexMatchSetUpdate</code> object, you specify the following values: </p>
         * <ul> <li> <p>Whether to insert or delete the object from the array. If you want
         * to change a <code>RegexMatchSetUpdate</code> object, you delete the existing
         * object and add a new one.</p> </li> <li> <p>The part of a web request that you
         * want AWS WAF to inspectupdate, such as a query string or the value of the
         * <code>User-Agent</code> header. </p> </li> <li> <p>The identifier of the pattern
         * (a regular expression) that you want AWS WAF to look for. For more information,
         * see <a>RegexPatternSet</a>. </p> </li> <li> <p>Whether to perform any
         * conversions on the request, such as converting it to lowercase, before
         * inspecting it for the specified string.</p> </li> </ul> <p> For example, you can
         * create a <code>RegexPatternSet</code> that matches any requests with
         * <code>User-Agent</code> headers that contain the string
         * <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject those
         * requests.</p> <p>To create and configure a <code>RegexMatchSet</code>, perform
         * the following steps:</p> <ol> <li> <p>Create a <code>RegexMatchSet.</code> For
         * more information, see <a>CreateRegexMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexMatchSet</code> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the identifier of the <code>RegexPatternSet</code>
         * that contain the regular expression patters you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegexMatchSetOutcome UpdateRegexMatchSet(const Model::UpdateRegexMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegexMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegexMatchSetOutcomeCallable UpdateRegexMatchSetCallable(const Model::UpdateRegexMatchSetRequest& request) const;

        /**
         * An Async wrapper for UpdateRegexMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegexMatchSetAsync(const Model::UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <code>RegexPatternString</code> objects in a <a>RegexPatternSet</a>. For each
         * <code>RegexPatternString</code> object, you specify the following values: </p>
         * <ul> <li> <p>Whether to insert or delete the
         * <code>RegexPatternString</code>.</p> </li> <li> <p>The regular expression
         * pattern that you want to insert or delete. For more information, see
         * <a>RegexPatternSet</a>. </p> </li> </ul> <p> For example, you can create a
         * <code>RegexPatternString</code> such as <code>B[a@]dB[o0]t</code>. AWS WAF will
         * match this <code>RegexPatternString</code> to:</p> <ul> <li> <p>BadBot</p> </li>
         * <li> <p>BadB0t</p> </li> <li> <p>B@dBot</p> </li> <li> <p>B@dB0t</p> </li> </ul>
         * <p>To create and configure a <code>RegexPatternSet</code>, perform the following
         * steps:</p> <ol> <li> <p>Create a <code>RegexPatternSet.</code> For more
         * information, see <a>CreateRegexPatternSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexPatternSet</code> request
         * to specify the regular expression pattern that you want AWS WAF to watch
         * for.</p> </li> </ol> <p>For more information about how to use the AWS WAF API to
         * allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegexPatternSetOutcome UpdateRegexPatternSet(const Model::UpdateRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegexPatternSetOutcomeCallable UpdateRegexPatternSetCallable(const Model::UpdateRegexPatternSetRequest& request) const;

        /**
         * An Async wrapper for UpdateRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegexPatternSetAsync(const Model::UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>Predicate</a> objects in a <code>Rule</code>. Each <code>Predicate</code>
         * object identifies a predicate, such as a <a>ByteMatchSet</a> or an <a>IPSet</a>,
         * that specifies the web requests that you want to allow, block, or count. If you
         * add more than one predicate to a <code>Rule</code>, a request must match all of
         * the specifications to be allowed, blocked, or counted. For example, suppose that
         * you add the following to a <code>Rule</code>: </p> <ul> <li> <p>A
         * <code>ByteMatchSet</code> that matches the value <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> <li> <p>An <code>IPSet</code> that
         * matches the IP address <code>192.0.2.44</code> </p> </li> </ul> <p>You then add
         * the <code>Rule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that satisfy the <code>Rule</code>. For a request to be blocked,
         * the <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code> <i>and</i> the request must originate from the IP address
         * 192.0.2.44.</p> <p>To create and configure a <code>Rule</code>, perform the
         * following steps:</p> <ol> <li> <p>Create and update the predicates that you want
         * to include in the <code>Rule</code>.</p> </li> <li> <p>Create the
         * <code>Rule</code>. See <a>CreateRule</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to add predicates to the
         * <code>Rule</code>.</p> </li> <li> <p>Create and update a <code>WebACL</code>
         * that contains the <code>Rule</code>. See <a>CreateWebACL</a>.</p> </li> </ol>
         * <p>If you want to replace one <code>ByteMatchSet</code> or <code>IPSet</code>
         * with another, you delete the existing one and add the new one.</p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleOutcomeCallable UpdateRuleCallable(const Model::UpdateRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleAsync(const Model::UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>ActivatedRule</a> objects in a <code>RuleGroup</code>.</p> <p>You can only
         * insert <code>REGULAR</code> rules into a rule group.</p> <p>You can have a
         * maximum of ten rules per rule group.</p> <p>To create and configure a
         * <code>RuleGroup</code>, perform the following steps:</p> <ol> <li> <p>Create and
         * update the <code>Rules</code> that you want to include in the
         * <code>RuleGroup</code>. See <a>CreateRule</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRuleGroup</a> request.</p>
         * </li> <li> <p>Submit an <code>UpdateRuleGroup</code> request to add
         * <code>Rules</code> to the <code>RuleGroup</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RuleGroup</code>. See
         * <a>CreateWebACL</a>.</p> </li> </ol> <p>If you want to replace one
         * <code>Rule</code> with another, you delete the existing one and add the new
         * one.</p> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleGroupOutcome UpdateRuleGroup(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleGroupOutcomeCallable UpdateRuleGroupCallable(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleGroupAsync(const Model::UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>SizeConstraint</a> objects (filters) in a <a>SizeConstraintSet</a>. For each
         * <code>SizeConstraint</code> object, you specify the following values: </p> <ul>
         * <li> <p>Whether to insert or delete the object from the array. If you want to
         * change a <code>SizeConstraintSetUpdate</code> object, you delete the existing
         * object and add a new one.</p> </li> <li> <p>The part of a web request that you
         * want AWS WAF to evaluate, such as the length of a query string or the length of
         * the <code>User-Agent</code> header.</p> </li> <li> <p>Whether to perform any
         * transformations on the request, such as converting it to lowercase, before
         * checking its length. Note that transformations of the request body are not
         * supported because the AWS resource forwards only the first <code>8192</code>
         * bytes of your request to AWS WAF.</p> <p>You can only specify a single type of
         * TextTransformation.</p> </li> <li> <p>A <code>ComparisonOperator</code> used for
         * evaluating the selected part of the request against the specified
         * <code>Size</code>, such as equals, greater than, less than, and so on.</p> </li>
         * <li> <p>The length, in bytes, that you want AWS WAF to watch for in selected
         * part of the request. The length is computed after applying the
         * transformation.</p> </li> </ul> <p>For example, you can add a
         * <code>SizeConstraintSetUpdate</code> object that matches web requests in which
         * the length of the <code>User-Agent</code> header is greater than 100 bytes. You
         * can then configure AWS WAF to block those requests.</p> <p>To create and
         * configure a <code>SizeConstraintSet</code>, perform the following steps:</p>
         * <ol> <li> <p>Create a <code>SizeConstraintSet.</code> For more information, see
         * <a>CreateSizeConstraintSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <code>UpdateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateSizeConstraintSet</code> request to specify the part of the request
         * that you want AWS WAF to inspect (for example, the header or the URI) and the
         * value that you want AWS WAF to watch for.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSizeConstraintSetOutcome UpdateSizeConstraintSet(const Model::UpdateSizeConstraintSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateSizeConstraintSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSizeConstraintSetOutcomeCallable UpdateSizeConstraintSetCallable(const Model::UpdateSizeConstraintSetRequest& request) const;

        /**
         * An Async wrapper for UpdateSizeConstraintSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSizeConstraintSetAsync(const Model::UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>SqlInjectionMatchTuple</a> objects (filters) in a
         * <a>SqlInjectionMatchSet</a>. For each <code>SqlInjectionMatchTuple</code>
         * object, you specify the following values:</p> <ul> <li> <p> <code>Action</code>:
         * Whether to insert the object into or delete the object from the array. To change
         * a <code>SqlInjectionMatchTuple</code>, you delete the existing object and add a
         * new one.</p> </li> <li> <p> <code>FieldToMatch</code>: The part of web requests
         * that you want AWS WAF to inspect and, if you want AWS WAF to inspect a header or
         * custom query parameter, the name of the header or parameter.</p> </li> <li> <p>
         * <code>TextTransformation</code>: Which text transformation, if any, to perform
         * on the web request before inspecting the request for snippets of malicious SQL
         * code.</p> <p>You can only specify a single type of TextTransformation.</p> </li>
         * </ul> <p>You use <code>SqlInjectionMatchSet</code> objects to specify which
         * CloudFront requests that you want to allow, block, or count. For example, if
         * you're receiving requests that contain snippets of SQL code in the query string
         * and you want to block the requests, you can create a
         * <code>SqlInjectionMatchSet</code> with the applicable settings, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure a
         * <code>SqlInjectionMatchSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Submit a <a>CreateSqlInjectionMatchSet</a> request.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateSqlInjectionMatchSet</code> request to specify the
         * parts of web requests that you want AWS WAF to inspect for snippets of SQL
         * code.</p> </li> </ol> <p>For more information about how to use the AWS WAF API
         * to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSqlInjectionMatchSetOutcome UpdateSqlInjectionMatchSet(const Model::UpdateSqlInjectionMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateSqlInjectionMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSqlInjectionMatchSetOutcomeCallable UpdateSqlInjectionMatchSetCallable(const Model::UpdateSqlInjectionMatchSetRequest& request) const;

        /**
         * An Async wrapper for UpdateSqlInjectionMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSqlInjectionMatchSetAsync(const Model::UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>ActivatedRule</a> objects in a <code>WebACL</code>. Each <code>Rule</code>
         * identifies web requests that you want to allow, block, or count. When you update
         * a <code>WebACL</code>, you specify the following values:</p> <ul> <li> <p>A
         * default action for the <code>WebACL</code>, either <code>ALLOW</code> or
         * <code>BLOCK</code>. AWS WAF performs the default action if a request doesn't
         * match the criteria in any of the <code>Rules</code> in a
         * <code>WebACL</code>.</p> </li> <li> <p>The <code>Rules</code> that you want to
         * add or delete. If you want to replace one <code>Rule</code> with another, you
         * delete the existing <code>Rule</code> and add the new one.</p> </li> <li> <p>For
         * each <code>Rule</code>, whether you want AWS WAF to allow requests, block
         * requests, or count requests that match the conditions in the
         * <code>Rule</code>.</p> </li> <li> <p>The order in which you want AWS WAF to
         * evaluate the <code>Rules</code> in a <code>WebACL</code>. If you add more than
         * one <code>Rule</code> to a <code>WebACL</code>, AWS WAF evaluates each request
         * against the <code>Rules</code> in order based on the value of
         * <code>Priority</code>. (The <code>Rule</code> that has the lowest value for
         * <code>Priority</code> is evaluated first.) When a web request matches all the
         * predicates (such as <code>ByteMatchSets</code> and <code>IPSets</code>) in a
         * <code>Rule</code>, AWS WAF immediately takes the corresponding action, allow or
         * block, and doesn't evaluate the request against the remaining <code>Rules</code>
         * in the <code>WebACL</code>, if any. </p> </li> </ul> <p>To create and configure
         * a <code>WebACL</code>, perform the following steps:</p> <ol> <li> <p>Create and
         * update the predicates that you want to include in <code>Rules</code>. For more
         * information, see <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>,
         * <a>CreateIPSet</a>, <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li>
         * <p>Create a <code>WebACL</code>. See <a>CreateWebACL</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateWebACL</code> request to specify the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>, to
         * specify the default action, and to associate the <code>WebACL</code> with a
         * CloudFront distribution. </p> <p>The <code>ActivatedRule</code> can be a rule
         * group. If you specify a rule group as your <code>ActivatedRule</code> , you can
         * exclude specific rules from that rule group.</p> <p>If you already have a rule
         * group associated with a web ACL and want to submit an <code>UpdateWebACL</code>
         * request to exclude certain rules from that rule group, you must first remove the
         * rule group from the web ACL, the re-insert it again, specifying the excluded
         * rules. For details, see <a>ActivatedRule$ExcludedRules</a> . </p> </li> </ol>
         * <p>Be aware that if you try to add a RATE_BASED rule to a web ACL without
         * setting the rule type when first creating the rule, the <a>UpdateWebACL</a>
         * request will fail because the request tries to add a REGULAR rule (the default
         * rule type) with the specified ID, which does not exist. </p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebACLOutcome UpdateWebACL(const Model::UpdateWebACLRequest& request) const;

        /**
         * A Callable wrapper for UpdateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWebACLOutcomeCallable UpdateWebACLCallable(const Model::UpdateWebACLRequest& request) const;

        /**
         * An Async wrapper for UpdateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWebACLAsync(const Model::UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>XssMatchTuple</a> objects (filters) in an <a>XssMatchSet</a>. For each
         * <code>XssMatchTuple</code> object, you specify the following values:</p> <ul>
         * <li> <p> <code>Action</code>: Whether to insert the object into or delete the
         * object from the array. To change an <code>XssMatchTuple</code>, you delete the
         * existing object and add a new one.</p> </li> <li> <p> <code>FieldToMatch</code>:
         * The part of web requests that you want AWS WAF to inspect and, if you want AWS
         * WAF to inspect a header or custom query parameter, the name of the header or
         * parameter.</p> </li> <li> <p> <code>TextTransformation</code>: Which text
         * transformation, if any, to perform on the web request before inspecting the
         * request for cross-site scripting attacks.</p> <p>You can only specify a single
         * type of TextTransformation.</p> </li> </ul> <p>You use <code>XssMatchSet</code>
         * objects to specify which CloudFront requests that you want to allow, block, or
         * count. For example, if you're receiving requests that contain cross-site
         * scripting attacks in the request body and you want to block the requests, you
         * can create an <code>XssMatchSet</code> with the applicable settings, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure an
         * <code>XssMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateXssMatchSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateXssMatchSet</code> request to specify the parts of web requests that
         * you want AWS WAF to inspect for cross-site scripting attacks.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateXssMatchSetOutcome UpdateXssMatchSet(const Model::UpdateXssMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateXssMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateXssMatchSetOutcomeCallable UpdateXssMatchSetCallable(const Model::UpdateXssMatchSetRequest& request) const;

        /**
         * An Async wrapper for UpdateXssMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateXssMatchSetAsync(const Model::UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WAFRegionalEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WAFRegionalClient>;
      void init(const WAFRegionalClientConfiguration& clientConfiguration);

      WAFRegionalClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WAFRegionalEndpointProviderBase> m_endpointProvider;
  };

} // namespace WAFRegional
} // namespace Aws
